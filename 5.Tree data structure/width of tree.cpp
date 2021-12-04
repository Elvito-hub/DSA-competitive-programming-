//The diameter of a tree (sometimes called the width) is the number of nodes
// on the longest path between two end nodes.

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *left,*right;
	Node(int data)
	{
		this->data = data;
		left = right = NULL;
	}
};

int height(struct Node* node)
{
	//if tree is empty
	if(node == NULL)
		return 0;
		
	return 1+max(height(node->left),height(node->right));
}
int diameter(struct Node* tree)
{
	// if tree is empty
	if(tree== NULL)
		return 0;
	//get height of left and right sub-trees
	int lheight = height(tree->left);
	int rheight = height(tree->right);
	
	//get the diameter of left and right sub-trees
	int ldiameter = diameter(tree->left);
	int rdiameter = diameter(tree->right);
	
	// Return max of following three
    // 1) Diameter of left subtree
    // 2) Diameter of right subtree
    // 3) Height of left subtree + height of right subtree + 1
	return max(lheight+rheight+1,
			max(ldiameter,rdiameter));
}

int main()
{
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    cout<<"Diameter of the given binary tree is "<<
    		diameter(root);
}
