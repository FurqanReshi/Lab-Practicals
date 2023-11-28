#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n],ele,found=0;
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&ele);
    for(int j=0;j<n;j++)
    {
        if(arr[j]==ele)
        {
            printf("Element found at the index %d",j);
            found = 1;
            break;
        }
    }
    if(found!=1)
    {
        printf("Element not found");
    }
}