#include<stdio.h>
int main()
{
  int number,i;
  unsigned long long factorial = 1;

  printf("Enter a psoitive integer: ");
  scanf("%d",&number);

  if(number<0)
  {
    printf("Error");
  }
  else
  {
    for(i=1;i<=number;++i)
    factorial *=i;
  }
  printf("Factorial of %d=%llu\n",number,factorial);
}