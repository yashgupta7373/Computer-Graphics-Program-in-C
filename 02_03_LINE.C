// line
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm, j, i;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    // line(300,100,100,400);

    for (i = 100; i <= 200; i++)
    {
        putpixel(i, 100, RED);
    }

    getch();
    closegraph();
}
