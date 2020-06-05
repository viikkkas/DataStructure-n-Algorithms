#include<iostream>
#include<stack>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

void reverseString(char *str, int n)
{
	stack<char> S;
	for(int i=0; i<n; i++)
	{
		S.push(str[i]);
	}
	for(int i=0; i<n; i++)
	{
		str[i] = S.top();
		S.pop();
	}	
}	

int main()
{
	char str[50];
	cout<<"Enter a string: ";
	cin>>str;
	reverseString(str, strlen(str));
	puts(str);
	return 0;
}
