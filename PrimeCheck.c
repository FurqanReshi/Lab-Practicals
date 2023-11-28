#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,j=0,k=1;
    printf("Enter a no.:");
    scanf("%d",&n);
    j=sqrt(n);
    if(n<=1){
    printf("Number is neither prime or non prime");}
    else if(n==2){
    printf("Number is prime");}
    else if(n%2==0){
        printf("Number is not prime");
    }
    else
    {
        for(i=3;i<=j;i+=2)
        {
            if(j%i==0)
            k=0;
            break;
        }
        if(k==1)
        printf("Number is prime");
        else
        printf("Number is non prime");
    }
    return 0;
}