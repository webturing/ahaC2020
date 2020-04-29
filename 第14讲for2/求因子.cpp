#include<stdio.h>
int main()
{
	int n=60;
	int i;
	for(i=1; i<=n; i++)
	{if(n%i==0)
		printf("%d ",i);
	}

	return 0;

}
