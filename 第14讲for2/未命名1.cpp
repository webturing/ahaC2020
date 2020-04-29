#include<stdio.h>
int main()
{
	int i,j,a,b;
	for(i=1; i<=100; i++)
	{
		j=i*i;
		if(j>=1000&&j<10000)
		{   
			b=j%100;
			a=j/100;
			if(a%11==0&&b%11==0)
			printf("%d\n",j);
		}

	}

	return 0;

}
