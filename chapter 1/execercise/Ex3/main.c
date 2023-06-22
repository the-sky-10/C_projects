//#include <stdio.h>

//int main()
//{
//    int A0l=1189,A0b=841;
//    printf("enter the sheets size OF A0l,AOb\n");
//    printf("%d\n%d\n",A0l,A0b);
//    A0l=A0l/2;
//    printf("a1 len = %d\n",A0b);
//    printf("a1 brd =%d\n",A0l);
//    A0b=A0b/2;
//    printf("a2 len=%d\n",A0l);
//    printf("a2 brd=%d\n",A0b);
//    A0l=A0l/2;
//    printf("a3 len =%d\n",A0l);
//    printf("a3 brd=%d\n",A0b);
//       A0l=A0l/2;;

//return 0;
//}



//#include<stdio.h>
//int main()
//{
//    char ch=128;
//    char dh=-132;
//    printf("%d %d\n",ch,dh);
//    return 0;
//}

#include<stdio.h>
int  natural(int);
int main()
{
    int n=1;
    printf("%d",n);
   natural(n);
// printf("%d",n);
   return 0;
}
int natural(int var)
{


    static int sum=var;
    if (sum<=10)
//      var++;

    {

        sum=var+natural(sum);
        printf("%d\n",sum);
       sum++;



    }
    printf("sum=%d\n",sum);

    return sum;
}
