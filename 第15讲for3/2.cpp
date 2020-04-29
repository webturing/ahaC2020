#include<stdio.h>
int main()
{
	int a=2147483647;
	int i;
	int s=0;
	for(i=2; i<=a/i; i++)
	{
		if(a%i==0)
		{
			s++;
			break;
		}
	}
	if(s==0)
	printf("yes");
	else
	printf("no");
	return 0;

}
