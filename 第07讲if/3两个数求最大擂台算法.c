#include<stdio.h> 
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int c;
	c=a;
	if(b>c){
		c=b;
	}
	printf("%d\n",c);
	return 0;
}
