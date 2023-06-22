#include <stdio.h>
#include<conio.h>

int main()
{
    float t,v,wcf;
    printf("enter the air temperature\n");
    scanf("%f%f",&t,&v);
    wcf= 35.74+0.6215*t+(0.4275*t-35.75)*pow(0,0.16);
    printf("enter the wind chill factor %f",wcf);
    return 0;
}
