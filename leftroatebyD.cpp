#include<iostream>
using namespace std;
void reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void leftrotate(int arr[],int d,int n)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main()
{
  int arr[]={1,2,3,4,5};
    int n=5;
    int d=2;
    cout<<"array before rotoation"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
   
leftrotate(arr,2,5);
cout<<endl;
 cout<<"value after rotation"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<",";
}
return 0;
}