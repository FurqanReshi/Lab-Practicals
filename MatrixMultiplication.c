#include<stdio.h>
int main()
{
    int m,n,p,q;
    printf("Enter the no. of rows and colums of first matrix: ");
    scanf("%d%d",&m,&n);
    int mat1[m][n];
    printf("Enter the no. of rows and colums of second matrix: ");
    scanf("%d%d",&p,&q);
    if(n!=p){
        printf("Invalid Multiplication!");
        return 1;
    }
    int mat2[p][q];
    printf("Enter the elements of the first matrix: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Enter the elements of the second matrix: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    int result[m][q];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            result[i][j]=0;
            for(int k=0;k<n;k++)
            {
                result[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("The resultant matrix is: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}