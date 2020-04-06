#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);//a=3 b=4
    printf("a=%d b=%d\n",a,b);
    int c;
    c=a;//c=3 a=3 b=4
    a=b;//c=3 a=4 b=4
    b=c;//c=3 a=4 b=3
    
    printf("a=%d b=%d\n",a,b);
    return 0;
}
