#include<stdio.h>
int main() {
	int i;
	for(i=100; i<=200; i++) {
		if(i%3==0)continue;
		if(i==137)continue;
		printf("%d\n",i);

	}
	return 0;
}
