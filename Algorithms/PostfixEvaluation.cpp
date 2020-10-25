#include<iostream>
#include<string>
#include<cctype>
#include<stack>
using namespace std;

int perform(int a, int b, char ch)
{
	if(ch == '+')
		return a+b;
	else if(ch=='-')
		return a-b;
	else if(ch=='*')
		return a*b;
	else
		return a/b;
}

void calculate(string str)
{
	stack<int> S;
	S.push(-1);
	int a,b,ab;
	for(int i=0; i<str.length(); i++)
	{
		if(isdigit(str[i]))
			S.push(str[i] - '0');
		else
		{
			b = S.top();
			S.pop();
			a = S.top();
			S.pop();
			ab = perform(a,b,str[i]);
			S.push(ab);
		}
	}
	cout<<S.top();
}

int main()
{
	string str;
	cin>>str;
	calculate(str);
	return 0;
}
