#include<iostream>
using namespace std;
/*
naive solution--> time complexity--->O(n^2)
int subarray(int arr[],int k,int sum)
{
    int current_sum=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)
        {
            current_sum+=arr[i];
            if(current_sum==sum) return true;
            else 
            return false;
        }
    }

}
*/
//effective solution
int subarray(int arr[],int k,int sum)
{
    int curr_sum=arr[0],start=0;
    for(int end=1;end<k;end++)//considering every point is the end point 
    {
        while(curr_sum>sum && start<end-1)///assuming start and end are startting at the same point 
        {
            curr_sum-=arr[start];
            start++;
        }
        if(curr_sum==sum) return true;
        if(end<k) 
        {
            curr_sum+=arr[end];
        }
    }
    return(curr_sum==sum);//exclusively for last 2 window.
}
int main()
{
    int arr[]={1,4,20,3,10,5},k=6,sum=33;
    cout<<subarray(arr,k,sum);
    return 0;
}