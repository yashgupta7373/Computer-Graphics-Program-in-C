#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    // square
    line(0, 100, 100, 100);
    line(0, 200, 100, 200);
    line(0, 100, 0, 200);
    line(100, 100, 100, 200);

    // rectangle
    line(300, 100, 500, 100);
    line(300, 100, 300, 200);
    line(500, 100, 500, 200);
    line(300, 200, 500, 200);

    // line
    line(200, 100, 200, 200);

    // triangle
    line(200, 300, 100, 400);
    line(200, 300, 300, 400);
    line(100, 400, 300, 400);

    getch();
    closegraph();
}