#include<stdio.h>
int main() {
	int a ,x ,y ,z,w;
	for(a=100; a<=999; a++) {
		z=a%10;
		y=a/10%10;
		x=a/100;
		if(a==x*x*x+y*y*y+z*z*z)
			printf("%d\n",a);
	 
	}
	return 0;
}
