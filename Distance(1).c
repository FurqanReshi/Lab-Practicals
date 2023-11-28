#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,e;
    printf("Enter Four Values");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    e=sqrt(((c-a)*(c-a))+((d-b)*(d-b)));
    printf("Distance=%f",e);
}