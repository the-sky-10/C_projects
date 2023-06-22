#include <stdio.h>

int main()
{
    int bp,da,hr,grs;
    printf("Enter the basic salary of ramesh\n");
    scanf("%d",&bp);
    da=0.6*bp;
    hr=0.2*bp;
    grs=bp+da+hr;
    printf("%d\n %d \n %d\n",da,hr,grs);
    return 0;
}
