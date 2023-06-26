#include <stdio.h>

int main()
{
    float p,l,cp,sp;
    printf("enter the cost price and selling price\n");
    scanf("%f%f",&cp,&sp);
    p=sp+cp;
    l=sp-cp;
    if (p>0)
        printf("enter the profit of Rs=%f\n",p);
    if(l<0)
        printf("enter the loss of Rs=%f\n",l);
    if(p==0);
    printf("no prfit,no loss");
    return 0;
}

