#include <stdio.h>

int main()
{
    int n,a1,a2,a3,a4,a5,res;
    printf("enter the five digits number");
    scanf("%d",&n);
    a5=n%10;
    n=n/10;
    a4=n%10;
    n=n/10;
    a3=n%10;
    n=n/10;
    a2=n%10;
    n=n/10;
    a1=n%10;
    res=a5*10000+ a4*1000+ a3*100+ a2*10 +a1;
    printf("%d\n",res);
    if(res==n)
        printf("reverse number of %d is same as actual number\n",n);


    return 0;
}
//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//    int num,a,b,c,d,e,x;

//    printf("Enter a five digit number : ");
//    scanf("%d", &num);

//    //separating digits of the number
//    e = num % 10;
//    d = (num/10) % 10;
//    c = (num/100) % 10;
//    b = (num/1000) % 10;
//    a = (num/10000);

//    //reversing the number
//    x = e*10000 + d*1000 + c*100 + b*10 + a;
//    printf("\n%d", x);

//    if(x == num)
//        printf("\n\nThe reverse of the number %d is same as actual number.", num);

//    getch();
//    return 0;
//}
