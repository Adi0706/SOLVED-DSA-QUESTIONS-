
#include<iostream>
using namespace std;
//linear search
/*
int search(int arr[],int size_of_array,int number_search)
{
    for(int i=0;i<size_of_array;i++)
    {
        if(arr[i]==number_search)
        return i;
    }
    return -1;

}*/
//insertion in array
//int insert(int arr,int n,int cap,int pos,int x)
//{
//    if(n==cap)
//    return n;
//    
//    int index=pos-1;//finding index where we put the element
//
//    for(int i=n-1;i>=index;i--)
//    {
//        arr[i+1]=arr[i];//all the elements to 1 position ahead,so that we can insert the element
//    }
//        arr[index]=x;//entering the element in the empty position.
//        return (n+1);
//}
//deletion in array
/*int delete(int arr[],int n,int x)
{
    int i;
    for( i=0;i<n;i++)
    {
        if(arr[i]==x)//searching if the element is there or not,break out of the loop if we find it 
        //this only checks for 1 occurence 
        break;
    }
    if(i==x)return n;//if the element you wanna delete is not present at all ,then the size is not going to change 

    for(int j=i;j<n-1;j++)
    {
        arr[j]=arr[j+1];//replace the next element with previous element ,the size of array decreases
    }
    return(n-1);//finally decrease the size of the array ,after deletion of the element.

}*/