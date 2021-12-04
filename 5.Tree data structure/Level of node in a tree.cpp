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
int getLevelUtil(struct Node *node,int data,int level)
{
	if(node== NULL)
		return 0;
	if(node->data == data)
		return level;
	int downlevel = getLevelUtil(node->left,data,level+1);
	
	if(downlevel != 0)
		return downlevel;
	downlevel = getLevelUtil(node->right,data,level+1);
	return downlevel;
}
int getLevel(struct Node *node,int data)
{
	return getLevelUtil(node,data,1);
}
int main()
{
	struct Node* root = new Node(1);
	root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
	for(int x=1;x<=5;x++)
	{
		cout<<"Level of"<<x<<" is "
			<<getLevel(root,x)<<endl;
	}
}
