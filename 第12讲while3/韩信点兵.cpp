#include<stdio.h>

int main() {
    int a = 1;
    while (a <= 1005) {
        if (a % 3 == 1 && a % 5 == 2 && a % 7 == 3)
            printf("%d ", a);

        a = a + 1;
    }

    return 0;
}
