#include<stdio.h>
int main() {
	int i;
	for(i=1; i<=100; i++) {
		if(1==i)continue;
		if(i>2&&i%2==0)continue;
		if(i>3&&i%3==0)continue;
		if(i>5&&i%5==0)continue;
//       if(i>7&&i%7==0)continue;
		printf("%d ",i);

	}
	return 0;
}
