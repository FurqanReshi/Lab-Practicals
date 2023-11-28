#include<stdio.h>
void main()
{
    int i,k,j=1;
    printf("Enter The number : ");
    scanf("%d",&k);
    if(k<0)
    {
      printf("ERROR");
    }
    else
    {
    for(i=1;i<=k;++i)
    {
      j *=i;
    }
    }
    printf("Factorial:%d ",j);
}