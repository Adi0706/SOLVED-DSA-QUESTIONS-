#include<iostream>
using namespace std;
/*
NAIVE SOLUTION
int countmax1s(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)//pehle element se dekhna start kro
    {
            int current=0;

        for(int j=i;j<n;j++)//fix the first element and compare it with all the elements in the binary array.
        {
            if(arr[j]==1)//if we get a 1 in the array then current +1
            current++;
            else
            break;
        }
        res=max(res,current);//get the maximum value of current number of 1s 
    }
return res;
}
*/
//EFFECTIVE SOLUTION...
int count1s(bool arr[],int n)
{
    int res=0;
    int current=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        current=0;
        else
        {
            current++;
            res=max(res,current);
        }
    }
    return res;

}
int main()
{
    bool arr[]={0,1,1,1,0,1};
    int n=6;
    cout<<count1s(arr,n);
    
    
}