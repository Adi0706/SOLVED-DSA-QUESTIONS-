#include<iostream>
using namespace std;
//NAIVE SOLUTION
/*
int maxdiff(int arr[],int n)
{
    int res=arr[1]-arr[0];//current result
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
             res=max(res,arr[j]-arr[i]);//we check every element in the array,if its more than the current result then we update the result.
        }
    }
    return res;
}
*/
//EFFECIENT WAY 
int maxdiff(int arr[],int n)
{
    int res=arr[1]-arr[0],minval=arr[0];
    for(int j=1;j<n;j++)
    {
        res=max(res,arr[j]-minval);
        minval=min(minval,arr[j]);
    }
    return res;
}

int main()
{
    int arr[]={2,3,10,6,4,8,1},n=7;
    int ans=maxdiff(arr,n);
    cout<<ans<<endl;
    return 0;
}