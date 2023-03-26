// 05. Flower pot...
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    arc(150, 150, 310, 40, 100);
    arc(380, 150, 140, 230, 100);
    arc(207, 280, 310, 27, 120);
    arc(321, 280, 154, 230, 120);
    arc(266, 324, 243, 290, 52);
    arc(265, 50, 220, 320, 52);
    arc(265, 120, 43, 139, 52);

    getch();
    closegraph();
}