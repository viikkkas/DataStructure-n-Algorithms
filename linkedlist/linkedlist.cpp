#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* link;
};
Node* head;
void pushfront()
{
	int num;
	cout<<"\nEnter data: ";
	cin>>num;
	Node* temp = new Node();
	temp->data = num;
	temp->link = head;
	head = temp;
}

void pushnth()
{
	int num,pos;
	cout<<"\nEnter data: ";
	cin>>num;
	cout<<"\nEnter position: ";
	cin>>pos;
	Node* temp = new Node();
	temp->data = num;
	temp->link = NULL;
	if(pos == 1)
	{
		temp->link = head;
		head = temp;
		return;
	}
	Node* temp1 = head;
	for(int i=1; i<pos-1; i++)
	{
		temp1 = temp1->link;
	}
	temp->link = temp1->link;
	temp1->link = temp;
}

void displaylist()
{
	if(head == NULL)
		cout<<"\nUnderflow";
	else
	{
		Node* temp = head;
		while(temp!=NULL)
		{
			cout<<temp->data<<"\n";
			temp = temp->link;
		}
	}
}

void deletenth()
{
	int pos;
	cout<<"\nEnter the position: ";
	cin>>pos;
	Node* temp = head;
	if(pos==1)
	{
		head = temp->link;
		delete temp;
		return;
	}
	for(int i=1; i<pos-1; i++)
		temp = temp->link;
	Node* temp1 = temp->link;
	temp->link = temp1->link;
	delete temp1;
}

void reverseIterative()
{
	Node *next, *current, *prev;
	current = head;
	prev = NULL;
	while(current!=NULL)
	{
		next = current->link;
		current->link = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

void reverseRecursive(Node* p)
{
	if(p->link==NULL)
	{
		head = p;
		return;
	}
	reverseRecursive(p->link);
	Node* q = p->link;
	q->link = p;
	p->link = NULL;
}

void displayReversed(Node* p)
{
	if(p==NULL)
		return;
	displayReversed(p->link);
	cout<<"\n";
	cout<<p->data;
}

int main()
{
	head = NULL;
	char ch = 'n';	
	do
	{
		cout<<"1. Display";
		cout<<"\n2. Enter node in front";
		cout<<"\n3. Enter node in nth position";
		cout<<"\n4. Delete at nth position";
		cout<<"\n5. Reversing the linked list (iterative)";
		cout<<"\n6. Reversing the linked list (recursive)";
		cout<<"\n7. Display the linked list in reverse order";
		cout<<"\nEnter your choice: ";
		int n;
		cin>>n;
		switch(n)
		{
			case 1: displaylist();
			break;
			case 2: pushfront();
			break;
			case 3: pushnth();
			break;
			case 4: deletenth();
			break;
			case 5: reverseIterative();
				cout<<"\nThe linked list is reversed.";
			break;
			case 6: reverseRecursive(head);
				cout<<"\nThe linked list is reversed.";
			break;
			case 7: displayReversed(head);
			break;
		}
		cout<<"\nDo you want to continue? (Y/N) : ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 0;
}
