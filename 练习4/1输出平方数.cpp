#include<stdio.h>

int main() {

    int a = 1,n=10;
     
    while (a <= n) {
    	if(a*a>=10&&a*a<100) 
           printf("%d ", a*a);
        a = a + 1;
    }
    return 0;
}
