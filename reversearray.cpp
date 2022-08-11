#include<iostream>
using namespace std;
//without any modification in the array
/*
void reverse(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}
*/
//with modifications in the array
// 5 7 10 30 ...5 to temp --> 7 10 30...30 to low--> 30 7 10...temp to high-->30 7 10 5} run in a loop for all elements
void reverse(int arr[],int n)
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
       

    }
}
int main()
{
    int n;
    cout<<"enter the number of elements you want to enter"<<endl;
    cin>>n;

    int *arr= new int[n];
    cout<<"enter in array"<<endl;
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
reverse(arr,n);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
    
    return 0;
}