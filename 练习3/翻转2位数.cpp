#include<stdio.h>
int main()
{
	int n=62;
	int a,b,m;
	b=n%10;
	a=n/10; 
	int t=a;
	a=b;
	b=t;
	m=a*10+b;
	printf("%d\n",m);
	return 0;
 } 
