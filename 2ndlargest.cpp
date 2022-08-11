#include<iostream>
using namespace std;
//TIME COMPLEXITY OF THE CODE IS :O(n);
int secondlarge(int arr[],int n)
{
    int res=-1,largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1||arr[i]>arr[res])
            res=i;
        }
    }
    return res;
}

int main()
{
int n=5;
int *arr=new int[n];

cout<<"enter in array"<<endl;
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
int pos=secondlarge(arr,n);
cout<<"the second larget element in the array is :"<<arr[pos]<<endl;
    
    return 0;
}
//practice code 

/*

int secondlargest(int arr[],int n){
    int res=-1,int largest=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
            
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1||arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    return res;

}
*/