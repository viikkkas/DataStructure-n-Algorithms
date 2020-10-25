#finding gcd of given array of elements

#include<iostream>
#include<stack>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}

void findGCD(stack<int> arr){
    int a,res;
    a = arr.top();
    arr.pop();
    res = a;
    while(!arr.empty()){
        a = arr.top();
        arr.pop();
        res = gcd(res,a);
    }
    cout<<"GCD is: "<<res;
}

int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int temp;
    stack<int> arr;
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        arr.push(temp);
    }
    findGCD(arr);
    return 0;
}
