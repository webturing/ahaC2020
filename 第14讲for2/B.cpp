#include<stdio.h>
int main()
{
	int n=2147483647;
	scanf("%d",&n);
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
	if(s==1)
		printf("yes");
	else
		printf("no");
	return 0;

}
