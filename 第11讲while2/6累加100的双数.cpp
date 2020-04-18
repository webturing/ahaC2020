#include<stdio.h>

int main() {

    int a = 1;
    int s = 0;
    while (a <= 100) {
        if (a % 2 == 0)
            s = s + a;
        a = a + 1;
    }
    printf("%d \n", s);
    return 0;
}
