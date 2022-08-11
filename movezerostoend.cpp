#include<iostream>
using namespace std;

//NAIVE SOLUTION-->O(n^2)
/*
void move(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                }
            }
            
            
        }
       
        cout<<arr[i]<<" ";
    }
    
}*/
//EFFECTIVE SOLUTION---O(n)
void moveZeros(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
          swap(arr[i],arr[count]);//count will only get incremented if we enter the function...
          //in this case the count counter stops at index 2 and i goes to 3 
          //so we can see the swap operation between index 2 and 3.
          count++;
          
        }
    }
}

int main()
{
    int arr[]={8,5,0,10,0},n=5;
 moveZeros(arr,n);
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }

    return 0;
}
