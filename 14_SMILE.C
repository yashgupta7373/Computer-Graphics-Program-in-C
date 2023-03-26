#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    circle(300, 200, 80);
    circle(265, 165, 15);
    circle(265, 170, 10);
    circle(335, 165, 15);
    circle(335, 170, 10);
    circle(300, 200, 7);
    arc(300, 205, 190, 350, 50);
    arc(300, 162, 225, 315, 70);
    arc(300, 275, 50, 130, 35);
    getch();
    closegraph();
}