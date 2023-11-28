#include<stdio.h>
int main()
{
    int i,first=0,second=1,next,n;
    printf("Enter the no. of terms you want: ");
    scanf("%d",&n);
    printf("Fibonacci series: %d %d ",first,second);
    for(i=3;i<=n;i++)
    {
        next=first+second;
        printf("%d ",next);
        first=second;
        second=next;
    }
    return 0;
}