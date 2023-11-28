#include<stdio.h>
void main()
{
    float r,a,l,b;
    printf("Enter the radius");
    scanf("%f",&r);
    printf("Enter the side of square");
    scanf("%f",&a);
    printf("Enter the lenght and breadth of rectangle");
    scanf("%f%f",&l,&b);
    float area,peri,ar,pr,are,per;
    area=3.14*r*r;
    peri=2*3.14*r;
    ar=a*a;
    pr=4*a;
    are=l*b;
    per=2*(l+b);
    printf("Area of circle=%f\n",area);
    printf("Peri of circle=%f\n",peri);
    printf("Area of Square=%f\n",ar);
    printf("Peri of Square=%f\n",pr);
    printf("Area of Rect=%f\n",are);
    printf("Peri of Rect=%f\n",per);
}