#include <stdio.h>

int main()
{
    int s1,s2,s3,s4,s5,per;
    printf("enter the five subjects marks\n");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    per=(s1+s2+s3+s4+s5)*100/500;
    printf("%d",per);
    if(per>=60)
        printf("first class");
    if((per>=50)&&(per<60))
        printf("second class");
    if((per>=40)&&(per<50))
            printf("third class");
    if(per<40)
        printf("fail");



    return 0;
}
