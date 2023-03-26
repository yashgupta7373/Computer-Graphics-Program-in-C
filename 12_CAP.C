// 1. cap...
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    line(300, 100, 150, 150);
    line(300, 100, 450, 150);
    line(300, 200, 150, 150);
    line(300, 200, 450, 150);

    line(220, 173, 220, 260);
    line(380, 173, 380, 260);
    arc(300, 180, 225, 315, 114);

    line(300, 150, 150, 150);
    line(150, 150, 150, 260);
    line(150, 200, 145, 260);
    line(150, 200, 155, 260);

    getch();
    closegraph();
}