#include <stdio.h>

int main()
{
    int num;
    printf("enter any number\n");
    scanf("%d",&num);
    if(num<0)
    printf("enter an absolute number %d",-1*num);
    else
    printf("enter an absolute value %d",num);
    return 0;
}
