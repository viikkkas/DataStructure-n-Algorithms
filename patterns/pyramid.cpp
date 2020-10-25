#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=0;
    for(int i=1; i<n; i++)
    {
        while(k<=n-i-2){
            cout<<" ";
            k++;
        }
        k=0;
        for(int j=0; j<i*2-1; j++)
            cout<<"*";
            
        cout<<endl;
    }
    return 0;
}
