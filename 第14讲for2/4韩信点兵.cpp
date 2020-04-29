#include<stdio.h>
int main()
{
	int n=999,i;
	for(i=10; i<=n; i++)
	{
		if(i%3==2&&i%5==3&&i%7==5)
		{

			printf("%d\n",i);
			break;
		}


	}

	return 0;

}
