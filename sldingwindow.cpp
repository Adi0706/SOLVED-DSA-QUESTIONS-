#include<iostream>
#include<climits>

//FINDING THE MAXIMUM SUM OF CONSECUTIVE k INTEGERS USING SLIDING WINDOW TECHNIQUE 

using namespace std;
/*
NAIVE SOLUTION
int sumfind(int arr[],int n,int k)
{
    int max_sum= INT_MIN;
    for(int i=0;i+k-1<n;i++)
    {
        int sum=0;
        for(int j=0;j<k;j++)
        {
            sum=sum+arr[i+1];
            max_sum=max(sum,max_sum);
        }
    }
    return max_sum;

}
*/
//SLIDING WINDOW TECHNIQUE
//[1,8,30,-5,20,7]--> take k consecutive elements substract the first elent and add the k+1 element at every iteration.
//taking k elements every time is considered as a window.
int findsum(int arr[],int k,int n)
{
    int current_sum=0;
    for(int i=0;i<k;i++)
    {
        current_sum+=arr[i];
    }
    int max_sum=current_sum;
    for(int i=k;i<n;i++)
    {
        current_sum+=(arr[i]-arr[i-k]);
        max_sum=max(max_sum,current_sum);
    }
    return max_sum;

}

int main()
{
    int arr[]={1,8,30,-5,20,7},n=6,k=3;
    cout<<findsum(arr,k,n);
    return 0;

}