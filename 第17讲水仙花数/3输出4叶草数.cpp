#include<stdio.h>
int main() {
	int a ,x ,y ,z,w;
	for(a=1000; a<=9999; a++) {
	//a=xyzw b=xyz c=xy
		w=a%10;
		z=(a/10)%10;
		y=a/10/10%10;
		x=a/1000;
		if(a==x*x*x*x+y*y*y*y+z*z*z*z+w*w*w*w)
			printf("%d\n",a);
	 
	}
	return 0;
}
