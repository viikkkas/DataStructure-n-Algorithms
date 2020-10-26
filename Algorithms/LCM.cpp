#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

void calculateLCM(int* arr, int n)
{
    int res = (arr[0]*arr[1])/(gcd(arr[0],arr[1]));
    for(int i=2; i<n; i++)
    {
        res = (res*arr[i])/(gcd(res,arr[i]));
    }
    
    cout<<"LCM is "<<res;
}

int main()
{
    int n;
    int arr[10];
    cout<<"\nEnter size of array: ";
    cin>>n;
    cout<<"\nEnter array : ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    calculateLCM(arr,n);
    return 0;
}
