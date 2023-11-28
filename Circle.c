#include<stdio.h>
void main()
{
    float r;
    printf("Enter the radius");
    scanf("%f",&r);
    float area,peri;
    area=3.14*r*r;
    peri=2*3.14*r;
    printf("Area =%f\n",area);
    printf("Peri =%f\n",peri);
}