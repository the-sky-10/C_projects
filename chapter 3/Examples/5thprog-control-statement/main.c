#include <stdio.h>

int main()
{
    int yr;
    printf("enter the year\n");
    scanf("%d",&yr);
    if(yr%100==0)
    {
        if(yr%400==)
        {
            printf("year is leap year\n");
        }
        else
            printf("year is not leap year\n");
    }
    else
    {
        if(yr%4==0)
        {
            printf("leap year\n");
        }
        else
            printf("not leap year\n");
    }
    return 0;
}
