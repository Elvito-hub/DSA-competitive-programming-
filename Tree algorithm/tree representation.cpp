//A tree is non-linear and a hierarchical data structure consisting of a collection of nodes
// such that each node of the tree stores a value, a list of references to nodes (the “children”).

//Basic Terminology In Tree Data Structure:

// Parent Node
// Child Node
// Root Node
// Degree of a Node:The total count of subtrees attached to that node is called the degree of the node.
// Leaf Node or External Node: The nodes which do not have any child nodes
// Ancestor of a Node:  Any predecessor nodes on the path of the root to that node are called Ancestors of that node. 
// Descendant: Any successor node on the path from the leaf node to that node.
// Sibling: Children of the same parent node are called siblings.
// Depth of a node: The count of edges from the root to the node.
// Height of a node: The number of edges on the longest path from that node to a leaf. 
// Height of a tree: The height of a tree is the height of the root node
// Level of a node: The count of edges on the path from the root node to that node.

#include<bits/stdc++.h>
using namespace std;
// Function to add an edge between vertices x and y
void addEdge(int x, int y, vector<vector<int> >& adj)
{
	adj[x].push_back(y);
    adj[y].push_back(x);
}
// Function to print the parent of each node
void printParents(int node, vector<vector<int> >& adj,
                  int parent)
{
	//current node is Root, thus, no parent
	if (parent == 0)
        cout << node << "->Root" << endl;
    else
    	cout<< node << "->" << parent << endl;
    //Using DFS
    for (auto cur : adj[node])
        if (cur != parent)
            printParents(cur, adj, node);
}
// Function to print the children of each node
void printChildren(int Root, vector<vector<int> >& adj)
{
	//Queue for BFS
	queue<int> q;
	// pushing the root
	q.push(Root);
	// visit array to keep track of nodes that have been
    // visited
    int vis[adj.size()] = { 0 };
    //BFS
    while(!q.empty()){
    	int node = q.front();
    	q.pop();
    	vis[node] = 1;
    	cout<< node << "->";
    	for(auto cur : adj[node])
    		if(vis[cur] == 0){
    			cout<< cur<<" ";
				q.push(cur); 
			}
			cout<<endl;
	}
}
// Function to print the leaf nodes
void printLeafNodes(int Root, vector<vector<int> >& adj)
{
	// Leaf nodes have only one edge and are not the root
	for(int i=1;i<adj.size();i++)
		if(adj[i].size() == 1 && i!=Root)
			cout<<i<<" ";
	cout<< endl;
}
// Function to print the degrees of each node
void printDegrees(int Root, vector<vector<int> >& adj)
{
	for(int i=1;i<adj.size();i++){
		cout<<i<<": ";
		// Root has no parent, thus, its degree is equal to
        // the edges it is connected to
        if (i == Root)
            cout << adj[i].size() << endl;
        else
            cout << adj[i].size() - 1 << endl;
	}
}
int main()
{
	//Number of nodes
	int N=7, Root=1;
	
	//Adjacency list to store the tree
	vector<vector<int> > adj(N+1,vector<int>());
	//Creating the tree
	addEdge(1, 2, adj);
    addEdge(1, 3, adj);
    addEdge(1, 4, adj);
    addEdge(2, 5, adj);
    addEdge(2, 6, adj);
    addEdge(4, 7, adj);
    //Printing the parents of each node
    cout << "The parents of each node are:" << endl;
    printParents(Root, adj, 0);
    //Printing the children of each node
    cout << "The children of each node are:" << endl;
    printChildren(Root, adj);
    //Printing the leaf nodes in the tree
    cout << "The leaf nodes of the tree are:" << endl;
    printLeafNodes(Root, adj);
    //Printing the degrees of each node
    cout << "The degrees of each node are:" << endl;
    printDegrees(Root, adj);
    
    return 0;
}
