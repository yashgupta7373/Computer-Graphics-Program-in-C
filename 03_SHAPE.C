// shape
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm, i, j, a, b;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    for (i = 100; i <= 500; i++)
    {
        for (j = 100; j <= 400; j++)
        {
            putpixel(i, j, RED);
        }
    }

    getch();
    closegraswph();
}