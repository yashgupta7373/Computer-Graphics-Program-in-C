#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm, i;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    for (i = 0; i < 500; i++)
    {
        setcolor(YELLOW);
        setbkcolor(LIGHTBLUE);
        arc(150 + i, 90, 180, 324, 100);
        arc(150 + i, 210, 36, 180, 100);
        arc(115 + i, 150, 137, 223, 90);
        circle(200 + i, 145, 4);
        arc(200 + i, 145, 30, 120, 10);
        circle(240 + i, 140, 10);
        circle(235 + i, 120, 7);
        circle(230 + i, 105, 4);
        {
            delay(40);
            cleardevice();
        }
    }
    getch();
    closegraph();
}