#include <stdio.h>

int main()
{
    float bs,hra,da,grp;
    printf("enter the salary\n");
    scanf("%f",&bs);
    if (bs<1500){
        hra=bs*10/100;
        da=bs*90/100;
    }
    else{
        hra=500;
        da=bs*98/100;
    }
    grp=hra+da+bs;
    printf("enter the gross pay=Rs %f\n",grp);
    return 0;
}
