#include<stdio.h>
int main() {
	int a ,x ,y ,z ;
	scanf("%d",&a);
	x=a/100;
	y=a%100/10;
	z=a%10;
	if(a==x*x*x+y*y*y+z*z*z)
		printf("1");
	else
		printf("0");
	return 0;
}
