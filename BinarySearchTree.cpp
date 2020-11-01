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


Node* insert(Node *root, int n)
{
    if(root==NULL)
    {
        Node *newNode = new Node(n);
        root = newNode;
        cout<<"\n"<<n<<" inserted";
    }
    else if(n <= root->data)
        root->left = insert(root->left,n);
    else
        root->right = insert(root->right,n);
        
    return root;
}

void inorder(Node *node)
{
    if(node == NULL)
        return;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

int main()
{
    Node *root = NULL;		
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
                    root = insert(root,data);
            break;
            case 2: cout<<"\nInorder traversal: ";
                    inorder(root);
            break;
        }
        cout<<"\nDo you want to continue? : ";
        cin>>ch;
    }while(ch=='y');
    return 0;
}
