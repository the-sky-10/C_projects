#include <stdio.h>
#include<math.h>

int main()
{
    float L1,L2,G1,G2,D;
    printf("enter the cartesain values\n");
    scanf("%f%f%f%f",&L1,&L2,&G1,&G2);
    D=3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
    printf("enter the distance value %f",D);
    return 0;
}
