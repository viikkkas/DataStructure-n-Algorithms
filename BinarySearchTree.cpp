#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
};

Node* getNewNode(int data)
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

Node* insert(Node* root, int data)
{
	if(root == NULL)
	{
		root = getNewNode(data);
		cout<<data<<" inserted"<<endl;
	}
	
	else if(data <= root->data)
	{
		root->left = insert(root->left,data);
	}
	
	else{
		root->right = insert(root->right,data);
	}
	
	return root;
}

bool search(Node* root, int data)
{
	if(root == NULL)
		return false;
	else if(data == root->data)
		return true;
	else if(data <= root->data)
		return search(root->left, data);
	else
		return search(root->right, data);
}

int main()
{
	Node* root = NULL;
	root = insert(root,5);
	root = insert(root,10);
	root = insert(root,4);
	root = insert(root,3);
	root = insert(root,45);
	root = insert(root,32);
	int n;
	cout<<"\nEnter a number to be searched: ";
	cin>>n;
	if(search(root,n) == true)
		cout<<"\nFound";
	else
		cout<<"\nNot found";
	return 0;
}
