//LCA(Lowest Common Ancestor) of two nodes u and in a rooted
//tree T is defined as the node located farthest from the root that
//has both u and v as descendants

//Algorithm: 
//
//1.Do a Euler tour on the tree, and fill the euler, 
//	level and first occurrence arrays.
//2.Using the first occurrence array, get the indices corresponding 
//	to the two nodes which will be the corners of the range in the level array that is fed to the RMQ algorithm for the minimum value.
//3.Once the algorithm return the index of the minimum level in
//	 the range, we use it to determine the LCA using Euler tour array.


#include<bits/stdc++.h>
using namespace std;

#define V 9 // number of nodes


int euler[2*V-1];
int level[2*V-1];
int firstOccurence[V+1];
int ind;

struct Node{
	int key;
	struct Node *left,*right;
	Node(int key)
	{
		this->key = key;
		left = right = NULL;
	}
};
// log base 2 of x
int Log2(int x)
{
    int ans = 0 ;
    while (x>>=1) ans++;
    return ans ;
}

/*  A recursive function to get the minimum value in a given range
     of array indexes. The following are parameters for this function.
 
    st    --> Pointer to segment tree
    index --> Index of current node in the segment tree. Initially
              0 is passed as root is always at index 0
    ss & se  --> Starting and ending indexes of the segment represented
                  by current node, i.e., st[index]
    qs & qe  --> Starting and ending indexes of query range */
int RMQUtil(int index,int ss,int se,int qs,int qe,int *st)
{
	int max=INT_MAX;
    // If segment of this node is a part of given range, then return
    //  the min of the segment
	if(qs<=ss && qe>=se)
		return st[index];
	// If segment of this node is outside the given range
	else if(se<qs || ss>qe)
		return max;
	
	// If a part of this segment overlaps with the given range
	int mid = (ss+se)/2;
	
	int q1 = RMQUtil(2*index+1, ss, mid, qs, qe, st);
    int q2 = RMQUtil(2*index+2, mid+1, se, qs, qe, st);
    
    return min(q1,q2);
}    
    
    


// Return minimum of elements in range from index qs (query start) to
// qe (query end).  It mainly uses RMQUtil()

int RMQ(int *st,int n,int qs,int qe)
{
	// Check for erroneous input values
	if(qs<0 || qe>n-1 || qs>qe)
	{
		printf("Invalid Input");
        return -1;
	}
	
	return RMQUtil(0,0,n-1,qs,qe,st);
}

void constructSTUtil(int si,int ss,int se,int arr[],int *st)
{
	if(ss==se)	st[si]=arr[ss];
	else{
		int mid=(ss+se)/2;
		constructSTUtil(si*2+1,ss,mid,arr,st);
		constructSTUtil(si*2+2,mid+1,se,arr,st);

            st[si] = min(st[2*si+1],st[2*si+2]);
	}
}

int *constructST(int arr[],int n)
{
	//height of segment tree;
	int x = Log2(n)+1;
	//size of segment tree
	int max_size = 2*(1<<x)-1;
	
	int *st = new int[max_size];
	memset(st,INT_MAX,sizeof(int)*(V+1));
	//fill allocated memory st
	constructSTUtil(0,0,n-1,arr,st);
	return st;
}


void eulerTour(Node *root,int l)
{
	if(root)
	{
		euler[ind] = root->key;
		level[ind] = l;
		ind++;
		//if unvisited, mark first occurence
		if(firstOccurence[root->key] == -1)
			firstOccurence[root->key] = ind-1;
			
		//tour left subtree if exists, and remark euler
		//and level arrays for parent on return
		if(root->left)
		{
			eulerTour(root->left,l+1);
			euler[ind]=root->key;
			level[ind]=l;
			ind++; 
		}
		//tour right subtree if exists,and remark euler
		//and level arrays for parent on return
		if(root->right)
		{
			eulerTour(root->right,l+1);
			euler[ind] = root->key;
			level[ind] = l;
			ind++;
		}
	}
}



int findLCA(Node *root,int u,int v)
{
	//Mark all nodes unvisited
	memset(firstOccurence,-1,sizeof(int)*(V+1));
	//start filling euler and level arrays from index 0
	ind = 0;
	//start euler Tour
	eulerTour(root,0);
	//construct segment tree on level array
	int *st=constructST(level,2*V-1);
	
	/* If v before u in Euler tour.  For RMQ to work, first
       parameter 'u' must be smaller than second 'v' */
    if(firstOccurence[u]>firstOccurence[v])
    	swap(u,v);
    	
    // Starting and ending indexes of query range
    int qs = firstOccurence[u];
    int qe = firstOccurence[v];
    
    // query for index of LCA in tour
    int index = RMQ(st, 2*V-1, qs, qe);
    
    return euler[index];
	
}
int main()
{
	// Let us create the Binary Tree as shown in the diagram.
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);
    
    int u = 4, v = 9;
    printf("The LCA of node %d and node %d is node %d.\n",
            u, v, findLCA(root, u, v));
}
