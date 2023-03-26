#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=0, gm,x,y,i;
initgraph(&gd, &gm, "c:\\turboc3\\bgi");

x = getmaxx()/2;
y= getmaxy()/2;
for(i=20; i<200; i++)
{
setcolor(i/10);
arc(x,y,0,180,10+i);
delay(50);
}
getch();
closegraph();
}
