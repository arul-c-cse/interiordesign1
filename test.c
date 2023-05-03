#include <stdio.h>

int main() {
     int n,sum=0,i,total,missing;
     Printf("Enter the the limit:");
     scanf("%d",&n);
     total =(n*(n+1))/2;
     for(i =0;i<n;i++)
     {
        sum =sum+i;         
     }
     missing =total-sum;
     printf("%d",missing);
}