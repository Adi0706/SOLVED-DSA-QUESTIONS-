#include<iostream>
using namespace std;
int remove(int arr[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res-1]!=arr[i])
        {
        arr[res]=arr[i];
        res++;
    }
    return res;
    }
}

int main()
{
    
      int arr[] = {10, 20, 20, 30, 30, 30}, n = 6;

      cout<<"Before Removal"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

       n = remove(arr, n);

       cout<<"After Removal"<<endl;

       for(int i = 0; i < n; i++)//here n denotes the value of res so that we can run the loop till the remaining values of n...
       {
       		cout<<arr[i]<<" ";
       }
    return 0;
}