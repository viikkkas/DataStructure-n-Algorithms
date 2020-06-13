#include<iostream>
using namespace std;
const int size=5;
int qu[size];
int front=-1;
int rear=-1;

bool isFull()
{
	if(((rear+1)%size == front)==true)
		return true;
	else
		false;
}

bool isEmpty()
{
	if(rear == -1 && front == -1)
		return true;
	else
		return false;
}

void enQu()
{
	if(isFull())
	{
		cout<<"\nQueue full.";
		return;
	}
	int n;
	cout<<"\nEnter data: ";
	cin>>n;
	if(isEmpty())
		rear = front = 0;
	else
		rear = (rear+1)%size;
	qu[rear] = n;
	cout<<"\nData inserted.";
}

void deQu()
{
	if(isEmpty())
	{
		cout<<"\nQueue is Empty.";
		return;
	}
	cout<<"\nData to be deleted is: "<<qu[front];
	if(front == rear)
		front = rear = -1;
	else
	{
		front = (front+1)%size;
	}
}

void displayFront()
{
	if(isEmpty())
	{
		cout<<"\nQueue Empty";
		return;
	}
	else
		cout<<"Front of the queue: "<<qu[front];
}

int main()
{
	char ch;
	do
	{
		int n;
		cout<<"\n1. Insert";
		cout<<"\n2. Delete";
		cout<<"\n3. Display front";
		cout<<"\nEnter your choice: ";
		cin>>n;
		switch(n)
		{
			case 1: enQu();
				break;
			case 2: deQu();
				break;
			case 3: displayFront();
				break;
		}
		cout<<"\nDo you want to continue? (Y/N): ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 0;
}
