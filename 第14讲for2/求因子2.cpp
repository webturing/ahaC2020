#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int i;
	for(i=n+m; i>=1; i--)
	{
		if(n%i==0&&m%i==0)
		{
			printf("%d",i);
			break;
		}
	}

	return 0;

}
