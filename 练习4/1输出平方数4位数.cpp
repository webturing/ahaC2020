#include<stdio.h>

int main() {

    int a = 1,n=10000,b,x,y;
     
    while (a <= n) {
    	if(a*a>=1000&&a*a<=9999) 
           {
           	b=a*a;//1024
           	x=b/100;
			y=b%100;
			if(x%11==0&&y%11==0) 
           	printf("%d ", b);
		   }
        a = a + 1;
    }
    return 0;
}
