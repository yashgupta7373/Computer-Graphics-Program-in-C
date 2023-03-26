#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    line(500, 100, 500, 350);
    line(430, 100, 430, 350);
    line(430, 100, 500, 100);
    line(430, 350, 500, 350);
    line(500, 100, 160, 300);
    line(430, 100, 100, 300);
    line(100, 300, 160, 300);
    line(500, 350, 160, 150);
    line(430, 350, 100, 150);
    line(100, 150, 160, 150);

    getch();
    closegraph();
}