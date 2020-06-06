#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* link;
};
Node* front = NULL;
Node* rear = NULL;

void enQu()
{
	int n;
	cout<<"\nEnter data: ";
	cin>>n;
	Node* temp = new Node();
	temp->data = n;
	temp->link = NULL;
	if(rear==NULL)
	{
		front = rear = temp;
		return;
	}
	rear->link = temp;
	rear = temp;
}

void deQu()
{
	if(front==NULL)
	{
		cout<<"\nQueue Empty.";
		return;
	}
	Node* temp = front;
	cout<<"\nData to be deleted is: "<<temp->data;
	front = front->link;
	if(front == NULL)
		rear = NULL;
	delete temp;
}

void displayQu()
{
	if(front==NULL)
	{
		cout<<"\nQueue Empty.";
		return;
	}
	Node* temp = front;
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
		cout<<"\n1. Insert";
		cout<<"\n2. Delete";
		cout<<"\n3. Display";
		cout<<"\nEnter your choice: ";
		cin>>n;
		switch(n)
		{
			case 1: enQu();
				cout<<"\nData inserted";
			break;
			case 2: deQu();
			break;
			case 3: displayQu();
			break;
		}
		cout<<"\nDo you want to continue? (Y/N): ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 0;
}
