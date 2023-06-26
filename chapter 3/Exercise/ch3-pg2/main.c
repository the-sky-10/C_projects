#include <stdio.h>

int main()
{
    int ram,shayam,ajay;
    printf("enter the ages\n");
    scanf("%d%d%d",&ram,&shayam,&ajay);
    if (ram>shayam && ram<ajay)
    printf("enter ram is yougest\n");
    else if(shayam>ram && shayam>ajay)
    printf("enter the shayam isyoungest\n");
    else
    printf("ajay is youngest\n");
    return 0;
}
