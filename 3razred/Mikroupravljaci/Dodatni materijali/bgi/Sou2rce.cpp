#include<stdio.h>
#include"graphics.h"
int main(){
	int i,a,x1,y1,x,y;
	initwindow(1000,1000);
	printf("Upisite stranicu brida kocke: ");
	scanf("%d",&a);
	printf("Upisi udaljenost sredista kocke od ishodista:");
	scanf("%d %d",&x1,&y1);
	x=x1-a/2;
	y=y1-a/2;
	line(200,800,200,200);
	line(200,800,800,800);
	outtextxy(200,800,"0");
	line(190,210,200,200);
	line(210,210,200,200);
	line(790,790,800,800);
	line(790,810,800,800);

	line(x,y,x+a,y);//*gornja
	line(x+a,y,x+a,y+a);//*desna
	line(x+a,y+a,x,y+a);//*donja
	line(x,y+a,x,y);//lijeva
	line(x+a,y+a,x+a+a/2,y+a/2);
	line(x+a+a/2,y+a/2,x+a+a/2,y-a/2);
	line(x+a+a/2,y-a/2,x+a,y);
	line(x,y,x+a/2,y-a/2);
	line(x+a/2,y-a/2,x+a+a/2,y-a/2);

	setfillstyle(1,BLUE);
	floodfill(x1,y1,-1);
	setfillstyle(1,GREEN);
	floodfill(x+a+a/4,y,-1);
	setfillstyle(1,COLOR(GREEN,BLUE,RED));
	floodfill(x+10,y-5,-1);





	getch();
	closegraph();
	return 0;
}