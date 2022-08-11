#include<iostream>
using namespace std;

/*
void rev(int arr[],int n)
{
    int temp;
    int start=0,end=n-1;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }*/

void leader(int arr[],int n)
{
   
    int current_leader=arr[n-1];
    cout<<current_leader<<" ";


    for(int i=n-2;i>=0;i--)

    {
        if(current_leader<arr[i])
        {
            current_leader=arr[i];
            cout<<current_leader<<" ";
            
            
        }
    }
}



int main()
{
  int arr[]={7,10,4,10,6,5,2};
  int n=7;

 leader(arr,n);


    
    return 0;
}