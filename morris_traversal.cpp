//program for Morris Preorder traversal
#include <bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node *left, *right;
};

node* newNode(int data)
{
	node* temp = new node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void morrisTraversalPreorder(node* root)
{
	while (root)
	{
		
		if (root->left == NULL)
		{
			cout<<root->data<<" ";
			root = root->right;
		}
		else
		{
			node* current = root->left;
			while (current->right && current->right != root)
				current = current->right;

			if (current->right == root)
			{
				current->right = NULL;
				root = root->right;
			}

			else
			{
				cout<<root->data<<" ";
				current->right = root;
				root = root->left;
			}
		}
	}
}

void preorder(node* root)
{
	if (root)
	{
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}

int main()
{
	node* root = NULL;

	root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left = newNode(4);
	root->left->right = newNode(5);

	root->right->left = newNode(6);
	root->right->right = newNode(7);

	root->left->left->left = newNode(8);
	root->left->left->right = newNode(9);

	root->left->right->left = newNode(10);
	root->left->right->right = newNode(11);

	morrisTraversalPreorder(root);

	cout<<endl;
	preorder(root);

	return 0;
}

