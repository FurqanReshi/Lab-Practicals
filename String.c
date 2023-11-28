#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char str1[20],str2[20],str3[20];
    int res;
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);
    printf("Concentation string is: %s\n",strcat(str1,str2));
    res=strcmp(str1,str2);
    printf("Compare string result is: %d\n",res);
    strcpy(str3,str1);
    printf("First String is: %s\n",str1);
    printf("Third String is: %s\n",str3);
    printf("Third string lower case: %s\n",strlwr(str3));
    printf("Third string upper case: %s",strupr(str3));
}