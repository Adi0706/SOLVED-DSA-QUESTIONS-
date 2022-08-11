#include<iostream>
#include<vector>
using namespace std;
vector<int> dupli(vector<int> &arr,int n)
{
    n=arr.size();
   
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr;
            
        }
 
        
    }
}

int main()
{
    vector<int> arr={2,3,1,2,3};
    int n=5;
   dupli(arr,n);
   return 0;
    
 
}