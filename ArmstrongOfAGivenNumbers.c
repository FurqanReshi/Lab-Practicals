#include<stdio.h>
#include<math.h>
int main()
{    
    int start,end,number,ogn,r,result,n;
    printf("Enter the starting number: ");
    scanf("%d",&start);
    printf("Enter the ending number: ");
    scanf("%d",&end);
    printf("Armstrong numbers between %d and %d are: ",start,end);
    for(number=start;number<=end;++number)
    {
        ogn=number;
        n=0;
        result=0;
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
            printf("%d ",number);
        }
    }
    return 0;
}
