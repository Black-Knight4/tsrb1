#include<stdio.h>
#include"graphics.h"
int main(){
	int i,r;
	initwindow(1000,1000);
	printf("Upisite polumjer kruznice: ");
	scanf("%d",&r);
	for(i=r; i<1000-r; i=i+r*2){
		line(0,500,1000,500);
		circle(i,500,r);
		cleardevice();
	}
	getch();
	closegraph();
	return 0;
}