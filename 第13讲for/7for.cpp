#include<stdio.h>

int main() {

	int a,s=0;
	for(a=1; a<=100 ; ++a ) {
		if(a%10==7)
			s+=a;

	}
	printf("%d ",s);

	return 0;
}
