#include<stdio.h>
int main()
{
	int a=876;
	int i;
	int s=0;
	for(i=999; i>=100; i--)
	{
		if(a%i==0)
		{
			s++;
			printf("%d ",i);
			//break;
		}
	}
	printf("%d\n",s);
	return 0;

}
