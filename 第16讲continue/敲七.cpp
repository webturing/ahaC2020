#include<stdio.h>
int main() {
	int i,s=0;
	for(i=1; i<=100; i++) {
		s=s+i;
		if(s>1000) {
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
