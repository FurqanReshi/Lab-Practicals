#include<stdio.h>
int main()
{
    int a[10],b[10],c[10];
    int even=0,odd=0;
    printf("Enter 10 numbers: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<10;j++)
    {
        if(a[j]%2==0)
        {
            b[even]=a[j];
            even++;
        }
        else
        {
            c[odd]=a[j];
            odd++;
        } 
    }
    printf("Even Numbers: ");
    for(int k=0;k<even;k++)
    {
        printf("%d ",b[k]);
    }
    printf("\nOdd Numbers: ");
    for(int l=0;l<odd;l++)
    {
        printf("%d ",c[l]);
    }
    return 0;
}