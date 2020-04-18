#include<stdio.h>
int main() {
printf("%d\n",365*120+29+31+29+31+14);
printf("%d\n",(365*120+29+31+29+31+14)%7);
	int a=1;
	int j=0;
	while(a<=100){
		printf("%3d ",a);
		//a=a+1;
		if(++j%10==0)printf("\n");
		a++;
	}

	return 0;
}
