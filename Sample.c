#include<stdio.h>
#include"sample1.c"
void main()
{
int a,b,c;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
c=add(a,b);
printf("Sum: %d",c);
}