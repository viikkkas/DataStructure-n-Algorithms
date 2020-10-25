#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,temp,sum=0;
	cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++)
	{
		cin>>temp;
		v.push_back(temp);
		sum = sum + temp;
	}
	
	make_heap(v.begin(), v.end());
	int k,max,res;
	cin>>k;
	for(int i=0; i<k; i++)
	{
		max = v.front();
		sum = sum-max;
		pop_heap(v.begin(),v.end());
		v.pop_back();
		res = sqrt(max);
		sum = sum + res;
		v.push_back(res);
		push_heap(v.begin(),v.end());
	}
	
	cout<<sum;
	return 0;
}
