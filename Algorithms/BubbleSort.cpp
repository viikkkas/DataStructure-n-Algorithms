#include<iostream>
using namespace std;

void bubbleSort(int arr[10], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j+1]<arr[j])
            {
                
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[6] = {5,3,1,67,45,22};
    int size = 6;
    bubbleSort(arr,size);
    return 0;
}
