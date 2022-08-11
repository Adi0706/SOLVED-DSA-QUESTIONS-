#include<iostream>
using namespace std;
void rotation(int arr[],int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
        arr[n-1]=temp;
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={8,5,0,10,0},n=5;
    rotation(arr,n);
    return 0;
}