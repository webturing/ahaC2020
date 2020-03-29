#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a; //申请一个变量(小盒子)名字叫a
    a = 3; // 向变量a中存储一个值3
    printf("%d\n",a+1);
    a = 5;
    printf("%d\n",a);
    a = a+1;//把a的值(5)加一的结果写入变量a中
    printf("%d\n",a);
    return 0;
}
