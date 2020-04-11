#include<stdio.h>
int main() {

	int a;
	scanf("%d",&a) ;
	if(a>100||a<0)
		printf("error!");
	else if(a<60)
		printf("fail");
	else 
		printf("pass");

	return 0;
}
