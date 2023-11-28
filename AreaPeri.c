#include<stdio.h>
#include<math.h>
void main()
{
    float r,a,l,b;
    printf("Enter the radius of the Cirlce");
    scanf("%f",&r);
    printf("Enter the side of Square");
    scanf("%f",&a);
    printf("Enter the lenght and breadth of Rectangle");
    scanf("%f%f",&l,&b);
    float area,peri,ar,pr,are,per;
    area=3.14*r*r;
    peri=2*3.14*r;
    ar=a*a;
    pr=4*a;
    are=l*b;
    per=2*(l+b);
    printf("Area and Perimeter of the Circle=%f,%f\n",area,peri);
    printf("Area and Perimeter of the Square=%f,%f\n",ar,pr);
    printf("Area and Perimeter of the Rectangle=%f,%f\n",are,per);
}