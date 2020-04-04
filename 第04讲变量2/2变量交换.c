#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 30, b = 14;
    printf("a=%d b=%d\n", a, b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("a=%d b=%d\n", a, b);

    return 0;
}
