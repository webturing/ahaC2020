#include<stdio.h>
int main() {

	int a=1;
	int s=0;
	while(a<=100) {
		s=s+a;
		a=a+2;
	}
	printf("%d \n",s);
	return 0;
}
