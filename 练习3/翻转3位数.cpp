#include<stdio.h>
int main()
{
	int n=120;
	scanf("%d",&n);
	int a,b,c,m;
	c=n%10; 
	b=n/10%10;
	a=n/10/10;
	m=c*100+b*10+a;
	printf("%d\n",m);
	return 0;
 } 
