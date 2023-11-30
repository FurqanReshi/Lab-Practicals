#include <stdio.h>
int fib(int n)
{
    if(n<=1)
    return n;
    else
    return fib(n-1)+fib(n-2);
}
int fib1(int n, int i)
{
    if(i<n)
    {printf("%d ",fib(i));}
    fib1(n,i+1);
}
void main()
{
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("\nFibonacci Series: ");
    fib1(n,0);
}
