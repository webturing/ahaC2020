#include<stdio.h>
int main() {
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
