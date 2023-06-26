#include <stdio.h>

int main()
{
    int l,b,are,peri;
    printf("enter the length and breadth of the rectangle\n");
    scanf("%d%d",&l,&b);
    are=l*b;
    peri=2*l+2*b;
    if (are>peri)
        printf("enter the area is greater then perim",are,peri);
    else
        printf("enter the perimeter is greater then area",are,peri);
    return 0;
}
