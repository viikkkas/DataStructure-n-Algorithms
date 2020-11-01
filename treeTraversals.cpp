#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data = data;
        left=right=NULL;
    }
};

void inorder(Node *node)
{
    if(node == NULL)
        return;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

void preorder(Node *node)
{
    if(node == NULL)
        return;
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}

void postorder(Node *node)
{
    if(node == NULL)
        return;
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(10);
    root->left->left=new Node(15);
    root->left->right = new Node(30);
    root->right = new Node(20);
    root->right->right = new Node(25);
    cout<<"Inorder traversal: ";
    inorder(root);
    cout<<"\nPreorder traversal: ";
    preorder(root);
    cout<<"\nPostorder traversal: ";
    postorder(root);
    return 0;
}



//..........................................//

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

Node* root = NULL;

void insert(Node *root, int n)
{
    if(root==NULL)
    {
        Node *newNode = new Node(n);
        cout<<"\n"<<n<<" inserted";
    }
    else if(n <= root->data)
        insert(root->left,n);
    else
        insert(root->right,n);
}

void inorder(Node *node)
{
    if(node == NULL)
        return;
    inorder(node->left);
    cout<<node->data;
    inorder(node->right);
}

int main()
{
    char ch;
    do
    {
        cout<<"\n1. Enter element in tree";
        cout<<"\n2. Inorder Traversal";
        cout<<"\nEnter your choice: ";
        int n;
        cin>>n;
        switch(n)
        {
            case 1: int data;
                    cout<<"\nEnter data: ";
                    cin>>data;
                    insert(root,data);
            break;
            case 2: cout<<"\nInorder traversal: ";
                    inorder(root);
            break;
        }
        cout<<"\nDo you want to continue? : ";
        cin>>ch;
    }while(ch=='y');
}
