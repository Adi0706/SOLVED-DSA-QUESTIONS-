#include<iostream>
using namespace std;
//MY APPROACH FAILED AT 5 12 30 2 35 ARRAY
/*
int largest(int arr[],int n)
{
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[res])
        res=i;
        return res;
    }
}
bool checksort(int arr[],int n)
{
    int large=largest(arr,n);
    if(large==0) return false;
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]<arr[large]) return true;
        else 
        return false;
    }
}*/
//can also be done using 2 loops where i starts from 0 and j starts from i+1
bool checksort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])//agr mera current element pehle element is chota h toh return false 
        return false;
    }
    return true;
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

cout<<checksort(arr,n);
return 0;


}