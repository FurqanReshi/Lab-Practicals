#include<stdio.h>
int main()
{
    int i,n,sum=0,avg;
    printf("Enter the natural number till whose average you want:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("%d\n",i);
    }
    avg=sum/n;
    printf("Average:%d",avg);
}