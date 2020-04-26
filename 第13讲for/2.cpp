#include<stdio.h>

int main() {

	int a,n=97,s=0;
	for(a=7; a<=n; a+=10) {

		s+=a;
	}
	printf("%d\n",s);
	return 0;
}
