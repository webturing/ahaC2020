#include<stdio.h>
#define YY 1900
#define MM 1
#define DD 1
#define WW 1

int D[2][13]= {
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
};
int leap(int y) {
	return y%4==0&&y%100!=0||y%400==0;
}
int main() {
	int y,m,d,w;
	while(~scanf("%d%d%d",&y,&m,&d)) {
		for(int i=YY; i<y; i++) {
			d+=365+leap(i);
		}
		for(int i=1; i<m; i++)
			d+=D[leap(y)][i];
		d%=7;
		printf("%d\n",d);
	}
}
