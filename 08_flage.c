#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    line(200, 100, 200, 350);
    line(205, 100, 205, 350);
    line(200, 100, 350, 100);
    line(200, 130, 350, 130);
    line(200, 160, 350, 160);
    line(200, 190, 350, 190);
    line(350, 100, 350, 190);
    circle(275, 145, 15);
    line(150, 350, 255, 350);
    line(150, 350, 150, 370);
    line(255, 350, 255, 370);
    line(100, 370, 305, 370);
    line(100, 370, 100, 390);
    line(305, 370, 305, 390);
    line(50, 390, 355, 390);
    line(50, 390, 50, 410);
    line(355, 390, 355, 410);
    line(50, 410, 355, 410);

    getch();
    closegraph();
}