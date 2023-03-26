#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    circle(300, 250, 200);
    circle(300, 250, 150);
    circle(300, 250, 100);
    circle(300, 250, 50);

    getch();
    closegraph();
}