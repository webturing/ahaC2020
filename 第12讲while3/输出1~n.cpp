#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a = 1;
    while (a <= n) {
        printf("%d\n", a);
        a = a + 1;
    }

    return 0;
}
