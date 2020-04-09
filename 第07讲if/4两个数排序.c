#include<stdio.h>
int main() {
	int a,b;
	scanf("%d%d",&a,&b);//a=3 b=4
	if(a>b) {
		int	c;
		c=a;
		a=b;
		b=c;
	}


	printf("%d %d\n",a,b);

	return 0;
}
