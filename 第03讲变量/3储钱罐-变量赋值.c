#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    a=0;
    printf("星期一储钱罐里有%d元\n",a);
    a=a+2;
    a=a-1;
    printf("星期二储钱罐里有%d元\n",a);
    a=a+2;
    printf("星期三储钱罐里有%d元\n",a);
    a=a+2;
    a=a-3;
    printf("星期四储钱罐里有%d元\n",a);
    a=a+2;
    a=a+a;
    printf("星期五储钱罐里有%d元\n",a);
    return 0;
}
