#include<stdio.h>
#include<math.h>
int main()
{    
    int number,ogn,r,result=0,n=0;
    printf("Enter an integer: ");
    scanf("%d",&number);
    ogn=number;
    while(ogn!=0)
    {
        ogn/=10;
        ++n;
    }
    ogn=number;
    while(ogn!=0)
    {
        r=ogn%10;
        result += pow(r,n);
        ogn/=10;  
    }
    if(result==number)
    {
        printf("%d is an Armstrong number. \n",number);
    }
    else 
    {
        printf("%d is not an Armstrong number. \n",number);
    }
    return 0;
}
