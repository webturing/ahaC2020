#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a = 1;
    int s = 0;
    while (a <= n) {

        s = s + a;

        a = a + 2;
    }
    printf("%d ", s);
    return 0;
}
