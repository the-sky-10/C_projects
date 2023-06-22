#include <stdio.h>

int main()
{
    int a,b,c,d,e,sum,n;
    printf("enter the number of 5 digits\n");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    e=n%10;
    sum=a+b+c+d+e;
    printf("enter the number %d",sum);

    return 0;
}
