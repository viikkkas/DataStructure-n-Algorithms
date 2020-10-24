#include <iostream>
using namespace std;
 
int max(int a, int b)
{
	return a>b?a:b;
}
 
void LIS(int* arr)
{
	int temp[7];
	for(int i=0; i<7; i++)
		temp[i]=1;
 
	int m=0;
 
	for(int i=1; i<7; i++)
	{
		for(int j=0; j<i; j++)
		{
			if(arr[j]<arr[i])
				temp[i] = max(temp[i],temp[j]+1);
		}
		m = max(m,temp[i]);
	}
 
	cout<<m;
}
 
int main() {
	int arr[7] = {3,4,-1,0,6,2,3};
	LIS(arr);
	return 0;
}