#include<stdio.h>

int main() {

	int a,s=0;
	for(a=1; a<=100 ; ++a ) {
		if(a%3==0||a%5==0)
			s++;

	}
	printf("%d ",s);
//	printf("%d ",s);

	return 0;
}
