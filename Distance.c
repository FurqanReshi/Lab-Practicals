#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,dist;
    printf("Enter the coordinates:");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("Distance between two cordinates is:%f",dist);
    return 0;
}
