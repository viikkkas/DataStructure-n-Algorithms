#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* link;
};
Node* top = NULL;

void push()
{
	int n;
	cout<<"\nEnter data: ";
	cin>>n;
	Node* temp = new Node();
	temp->data = n;
	temp->link = top;
	top = temp;
}

void pop()
{
	Node* temp;
	if(top==NULL)
	{
		cout<<"\nStack Underflow.";
		return;
	}
	temp = top;
	cout<<"\nThe data to be deleted is: "<<temp->data;
	top = top->link;
	delete temp;
}

void displaystack()
{
	if(top==NULL)
	{
		cout<<"\nStack Underflow.";
		return;
	}
	Node* temp = top;
	while(temp!=NULL)
	{
		cout<<"\n"<<temp->data;
		temp = temp->link;
	}
}

int main()
{
	char ch;
	do
	{
		int n;
		cout<<"\n1. Push";
		cout<<"\n2. Pop";
		cout<<"\n3. Display";
		cout<<"\nEnter your choice: ";
		cin>>n;
		switch(n)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: displaystack();
			break;
		}
		cout<<"\nDo you want to continue? (Y/N): ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
}
