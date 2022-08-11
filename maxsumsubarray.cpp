#include<iostream>
#include<climits>

using namespace std;
int maxsum(int arr[],int n,int k,int start,int end)
{
    int sum=0;
    int maximum=INT_MAX;
    while(end<n)
    {
        if((end-start+1)<k)
        {
            sum=sum+arr[end];
            end++;
        }
        else if((end-start+1)==k)
        {
            sum=sum-arr[start];
            maximum=max(maximum,sum);
            end++;
            start++;
        }
    }
    return maximum;
}

int main()
{
    int arr[]={2,5,1,8,2,9,1};
    int n=7,k=3;
    int start=0;
    int end=n-1;
    cout<<maxsum(arr,n,k,start,end);
    
    
}