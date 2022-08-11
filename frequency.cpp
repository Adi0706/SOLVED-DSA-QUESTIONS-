#include<iostream>
using namespace std;
void printfreq(int arr[],int n)
{
    int freq=1,i=1;
    while(i<n)
    {
        while(i<n&&arr[i]==arr[i-1])//checking if the current element is same as the last element,freq +1 and index +1.
        {
            freq++;
            i++;
        }
         cout<<arr[i-1]<<" "<<freq<<endl;
    i++;
    freq=1;

    }
   
    if(n==1||arr[n-1]!=arr[n-2])//if theres only 1 element or the last element is not equal to the previous element then print the element
    //and set frequency as 1 .
    cout<<arr[n-1]<<" "<<"1";
}

int main()
{
    int arr[]={10,10,20,20,30,40};
    int n=6;
    printfreq(arr,n);
    
    return 0;
}