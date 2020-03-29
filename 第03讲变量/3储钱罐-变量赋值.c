#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    a = 0;
    printf("����һ��Ǯ������%dԪ\n", a);
    a = a + 2;
    a = a - 1;
    printf("���ڶ���Ǯ������%dԪ\n", a);
    a = a + 2;
    printf("��������Ǯ������%dԪ\n", a);
    a = a + 2;
    a = a - 3;
    printf("�����Ĵ�Ǯ������%dԪ\n", a);
    a = a + 2;
    a = a + a;
    printf("�����崢Ǯ������%dԪ\n", a);
    return 0;
}
