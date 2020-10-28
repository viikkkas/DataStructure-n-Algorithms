#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {5,3,1,67,45,22};
    int size = 6;
    int min;
    for(int i=0; i<size-1; i++)
    {
        min = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[min]>arr[j])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
        
    return 0;
}
