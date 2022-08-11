#include<iostream>
using namespace std ;
/*
int maxprofit(int price[],int n)
{
    int profit=0;
    for(int i=0;i<n;i++)
    {
        if(price[i]>price[i-1])
        {
            profit=profit+(price[i]-price[i-1]);
        }
    }
    return profit ;
}*/
int Maxprofit(int price[],int start,int end)
{
    if(end<=start)
    return 0;
    int profit=0;
    for(int i=start;i<end;i++)
    {
        for(int j=i+1;j<=end;j++)
        {
            if(price[j]>price[i])
            {
                int current_profit=price[j]-price[i]+
                Maxprofit(price,start,i-1)+
                Maxprofit(price,j+1,end);

                profit=max(profit,current_profit);
            }
        }
    }
    return profit;
}
int main()
{
    int price[]={1,5,3,8,12};
    int n=5;
    cout<<Maxprofit(price,0,n-1);

    
}