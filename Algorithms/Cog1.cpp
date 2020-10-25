//minimum number of appends required to make the input string palindrome

#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string str, int m, int n)
{
	for(int i=m, j=n; i<n/2; i++, j--)
	{
		if(str[i]!=str[j])
			return false;
	}
	return true;
}

void calculate(string str)
{
	int n=str.length(),i;
	for(i=0; i<n; i++)
	{
		if(checkPalindrome(str,i,n)==true)
			break;
	}
	
	cout<<i;
}

int main()
{
	string str;
	cin>>str;
	calculate(str);
	return 0;
}
