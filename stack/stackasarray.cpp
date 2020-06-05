#include<iostream>
using namespace std;
const int size = 5;
int arr[size];
int top=-1;

void push()
{
	if(top==size-1)
	{
		cout<<"\nStack Overflow";
		return;
	}
	int n;
	cout<<"\nEnter data: ";
	cin>>n;
	top++;
	arr[top] = n;
	cout<<"\nData pushed";
}

void pop()
{
	if(top==-1)
	{
		cout<<"\nStack Underflow";
		return;
	}
	cout<<"\nData to be popped is: "<<arr[top];
	top--;
}

void displaystack()
{
	if(top==-1)
	{
		cout<<"\nStack Underflow";
		return;
	}
	int temp = top;
	while(temp>-1)
	{
		cout<<"\n"<<arr[temp];	
		temp--;	
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
	return 0;
}
