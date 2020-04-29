#include<stdio.h>
int main()
{
	int n=2147483647;
	int s=1;
	int i;
	for(i=2; i<=n-1; i++)
	{
		if(n%i==0)
		{
			s=0;
			break;
		}
	}
	printf("%d\n",s);
	return 0;

}
