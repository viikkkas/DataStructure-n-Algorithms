#include<iostream>
using namespace std;

void insertionSort(int arr[10], int n)
{
    int value;
    for(int i=1; i<n; i++)
    {
        value = arr[i];
        int hole = i;
        while(hole>0 && arr[hole-1]>value)
        {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
    }
    
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[6] = {5,3,1,67,45,22};
    int size = 6;
    insertionSort(arr,size);
    return 0;
}
