#include<stdio.h>

int main()
{
    int arr[30],num,i,j,k;
    printf("Enter the size of array: ");
    scanf("%d",&num);
    printf("Enter the Values: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;)
        {
            if(arr[j]==arr[i])
            {
                for(k=j;k<num;k++)
                {
                    arr[k]=arr[k+1];
                }
                    num--;
            }
                else
                {
                    j++;
                }
            
        }
    }
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}