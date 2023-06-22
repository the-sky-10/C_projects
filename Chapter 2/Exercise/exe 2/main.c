#include <stdio.h>
#include<math.h>

int main()
{
    float x,y,r,theta;
    printf("enter the cartesian co-ordinates\n");
    scanf("%f%f",&x,&y);
    r=sqrt(x*x+y*y);
    theta=atan(y/x);
    printf("enter the polar cordinates %f",r,theta);
    return 0;
}
