/*this program checks if the given expression contains same amount of opening braces, brackets and 
paranthesis as the closing ones.*/
#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool match(char opening, char closing)
{
	if(opening=='(' && closing==')')
		return true;
	if(opening=='[' && closing==']')
		return true;
	if(opening=='{' && closing=='}')
		return true;
	return false;
}

bool checkParanthesis(string exp)
{
	stack<char> S;
	for(int i=0; i<exp.length(); i++)
	{
		if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
			S.push(exp[i]);
		else if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
		{
			if(S.empty() || !match(S.top(),exp[i]))
				return false;
			else
				S.pop();
		}
	}
	if(S.empty() == true)
		return true;
	else
		return false;
}

int main()
{
	string exp;
	cout<<"\nEnter an expression: ";
	cin>>exp;
	if(checkParanthesis(exp)==true)
		cout<<"\nBalanced.";
	else
		cout<<"\nNot Balanced.";
	return 0;
}
