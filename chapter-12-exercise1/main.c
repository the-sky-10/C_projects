#include <stdio.h>
#define ISLOWER(X)(X>=97&&X<=122?1:0)
#define ISUPPER(X)(X>=65&&X<=90?1:0)
#define ISALPHA(X)(ISUPPER(X)||ISLOWER(X))
#define BIG(X,Y)(X>Y?X:Y)

int main()
{
    char ch;
    int a,b,d;
    printf("Enter any alphabet/character\n");
    scanf("%c",&ch);
    if(ISLOWER(ch)==1)
        printf("You entered a small letter\n");
    if(ISUPPER(ch)==1)
        printf("you entered a capital letter\n");
    if(ISALPHA(ch)!=1)
        printf("you entered character other than an alphabet\n");
    printf("Enter any two number:");
    scanf("%d%d",&b,&d);
    d=BIG(b,d);
    printf("Biggest number is %d\n",d);
    return 0;
}


