#include<stdio.h>
int main()
{
    int i,n;
    float num,max;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter Number: ");
    scanf("%f",&num);
    max=num;
    for(i=1;i<n;++i)
    {
        printf("Enter Number: ");
        scanf("%f",&num);
        if(num>max)
        {
            max=num;
        }
    }
    printf("Maxmum number is: %.2f\n",max);
    return 0;
}