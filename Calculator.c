#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    int x;
    printf("1=Addition\n 2=Subtraction\n 3=Multiplication\n 4=Division\n");
    scanf("%d",&x);
    if(x==1)
    {
        c=a+b;
        printf("Addition : %d",c);
    }
    else if(x==2)
    {
        c=a-b;
        printf("Subtration : %d",c);
    }
    else if(x==3)
    {
        c=a*b;
        printf("Multiplication : %d",c);
    }
    else if(x==4)
    {
        if(b==0)
        {
            printf("Infinity");
        }
        else{
        c=a/b;
        printf("Division : %d",c);
    }
    }
}