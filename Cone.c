#include<stdio.h>
#include<math.h>
void main()
{
    float h,r,t,v;
    printf("Enter the height and radius of cone");
    scanf("%f%f",&h,&r);
    t=3.14*r*(r+sqrt((h*h)+(r*r)));
    v=(0.33)*(3.14*r*r*h);
    printf("TSA of cone is=%f\n",t);
    printf("Vol of cone=%f",v);
}