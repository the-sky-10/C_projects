#include <stdio.h>
#include<math.h>

int main()
{
    float a,b,c,sp,area;
    printf("enter the sides of an triangle");
    scanf("%f %f %f",&a,&b,&c);
    sp=(a+b+c)/2;
    area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("enter the Area of triangle %f",area);
    return 0;

}
