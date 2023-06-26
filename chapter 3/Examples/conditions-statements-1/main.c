#include <stdio.h>

int main()
{
    int qty,dis;
    float price,tot;
    printf("enter the Price and quantity of the item\n");
    scanf("%d%f",&qty,&price);
    if (qty>1000){
        dis=10;
    }
    else{
    (qty<1000);
     dis=0;
    }
    tot=(qty*price)-(qty*price*dis/100);
    printf("total expenses=Rs %f\n",tot);
    return 0;
}


