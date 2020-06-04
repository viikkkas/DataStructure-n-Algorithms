#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node* prev;
};
Node* head;

void insertAtHead()
{
	int n;
	cout<<"\nEnter data: ";
	cin>>n;
	Node* temp = new Node();
	temp->data = n;
	temp->next = NULL;
	temp->prev = NULL;
	if(head == NULL)
	{
		head=temp;
		return;
	}
	head->prev = temp;
	temp->next = head;
	head = temp;
}

void displayList()
{
	if(head==NULL)
	{
		cout<<"\nUnderflow";
		return;
	}
	Node* temp = head;
	while(temp!=NULL)
	{
		cout<<"\n"<<temp->data;
		temp = temp->next;
	}
}

void printReverse()
{
	if(head==NULL)
	{
		cout<<"\nUnderflow";
		return;
	}
	Node* temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	while(temp!=NULL)
	{
		cout<<"\n"<<temp->data;
		temp = temp->prev;
	}
}

void insertAtTail()
{
	int n;
	cout<<"\nEnter data: ";
	cin>>n;
	Node* temp = new Node();
	temp->data = n;
	temp->next = NULL;
	temp->prev = NULL;
	Node* temp1 = head;
	if(head==NULL)	
	{
		head = temp;
		return;
	}
	while(temp1->next!=NULL)
		temp1 = temp1->next;
	temp1->next = temp;
	temp->prev = temp1;
}

int main()
{
	char ch='n';
	do
	{
		int n;
		cout<<"\n1. Display list";
		cout<<"\n2. Display list in reverse manner";
		cout<<"\n3. Enter data at head";
		cout<<"\n4. Enter data at tail";
		cout<<"\nEnter your choice: ";
		cin>>n;
		switch(n)
		{
			case 1: displayList();
			break;
			case 2: printReverse();
			break;
			case 3: insertAtHead();
			break;
			case 4: insertAtTail();
			break;
		}
		cout<<"\nDo you want to continue(Y/N): ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 0;
}
