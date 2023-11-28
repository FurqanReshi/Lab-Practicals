#include<stdio.h>
void main()
{
    int num,i=2,c=0;
    printf("Input Number: ");
    scanf("%d",&num);
    while(i<=num/2)
    {
        if(num% i==0)
        {
            c++;
            break;
        }
        i++;
    }
    if(c==0&&num!=1)
    printf("%d is a prime number.\n",num);
    else
    printf("%d is not a prime number.\n",num);
}