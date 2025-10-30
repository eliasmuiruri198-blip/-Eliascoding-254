/*
Name:Muiruri Elias
Reg No:CT100/G/26169/25
Description :Hotel revenue collection 1D array program 
*/
#include <stdio.h>
// 1D Array: Weekly Revenue Tracker
int main() {
int i;
    int average_revenue;
    int weekly_revenue=0;
    int revenue[7]={10000,16000,6000,7500,7300,7800,5800};
    //for(start,stop,step)
    
    for(i=0;i<7;i++)
    {
    weekly_revenue+=revenue[i];
    }
printf("weekly_revenue=Ksh.%d\n" ,weekly_revenue);
    {
    average_revenue=weekly_revenue/7;
    }
    printf("average_revenue is=Ksh.%d\n",average_revenue);
    
    return 0;
    
    }