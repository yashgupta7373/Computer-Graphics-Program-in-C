#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    arc(150, 90, 180, 324, 100);
    arc(150, 210, 36, 180, 100);
    arc(115, 150, 137, 223, 90);
    circle(200, 145, 4);
    arc(200, 145, 30, 120, 10);
    circle(240, 140, 10);
    circle(235, 120, 7);
    circle(230, 105, 4);

    getch();
    closegraph();
}