#include<stdio.h>
void main()
{
    char x;
    printf("Enter a character:");
    scanf("%c",&x);
    if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
    {
        printf("Character is a vowel");
    }
    else{
        printf("Character is a consonant");
    }
}