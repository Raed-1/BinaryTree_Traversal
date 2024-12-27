#include<iostream>
#include"Node.h"

using namespace std;
template<class type>
void preorderTraversal(Node<type>* root)
{
	if (!root)
	{
		return;
	}
	cout << root->data << " ";
	preorderTraversal(root->left);
	preorderTraversal(root->right);

}
template<class type>
void inorderTraversal(Node<type>* root)
{
	if (!root)
	{
		return;
	}
	
	inorderTraversal(root->left);
	cout << root->data << " ";
	inorderTraversal(root->right);

}

template<class type>
void postorderTraversal(Node<type>* root)
{
	if (!root)
	{
		return;
	}
	preorderTraversal(root->left);
	preorderTraversal(root->right);
	cout << root->data << " ";
	

}

int main()
{
	Node<int>* root = new Node<int>(4);

	root->left = new Node<int>(3);

	root->right = new Node<int>(2);

	cout << "PreOrder : \n"; preorderTraversal(root);
	cout << "\nInOrder : \n"; inorderTraversal(root);
	cout << "\nPostOrder : \n"; postorderTraversal(root);

	return 0;

}