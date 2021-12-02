#include<bits/stdc++.h>
using namespace std;
//A binary tree node
class node {
	public:
		int data;
		node *left,*right;
};

//helper function that allocates 
//a new node with given data
node* newNode(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;
	return (Node);
}
//compute height of a tree
int height(node *node)
{
	if(node==NULL)
		return 0;
	else {
		//compute height of each subtree
		int lheight = height(node->left);
		int rheight = height(node->right);
		//use larger one
		if(lheight>rheight)
			return lheight+1;
		else
			return rheight+1;
	}
}
//print nodes of current level
void printCurrentLevel(node *root,int level)
{
	if(root == NULL)
		return;
	if(level == 1)
		cout<<root->data<<" ";
	else if(level>1){
		printCurrentLevel(root->left,level-1);
		printCurrentLevel(root->right,level-1);
	}
}

//function to print BFS
void printLevelOrder(node *root)
{
	int h = height(root);
	int i;
	for(i=1;i<=h;i++)
		printCurrentLevel(root,i);
}
int main()
{
	node* root = newNode(1);
	root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    
    cout<<"Level order Traversal(BFS) is \n";
    printLevelOrder(root);
    return 0;
	
}
