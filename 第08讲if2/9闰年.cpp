#include<stdio.h>
int main() {
	//四年一闰，百年不闰，四百年再闰 
	int a;
	scanf("%d",&a) ;
	if(a%4==0&&a%100!=0||a%400==0){
		printf("366");
	}else{
		printf("365");
	}

	return 0;
}
