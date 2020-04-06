#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);//a=3 b=4
    printf("a=%d b=%d\n",a,b);
    a=a+b;//a=7 b=4
    b=a-b;//a=7 b=3 
    a=a-b;//a=4 b=3
     printf("a=%d b=%d\n",a,b);
    return 0;
}
