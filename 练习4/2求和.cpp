#include<stdio.h>

int main() {

    int a = 1,n=100,s=0;  
    while (a <= n) {
        s=s+a;
        a = a + 1;
    }
    printf("%d",s);
    return 0;
}
