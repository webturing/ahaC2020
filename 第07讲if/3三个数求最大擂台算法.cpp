#include<stdio.h> 
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int d;
	d=a;
	if (b>d) d=b;
	if (c>d) d=c;
	
	printf("%d\n",d);
	return 0;
}
