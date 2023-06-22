#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the two numbers a\n");
    scanf("%d",&a);
    printf("enter the two numbers b\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;

    printf("after swapping a%d\n",a);
    printf("after swapping       b%d\n",b);
    return 0;
}
