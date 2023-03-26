#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm, i;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    // line(300, 100, 100, 300);
    // line(300, 100, 500, 300);
    // line(100, 300, 500, 300);

    for (i = 0; i <= 100; i++)
        putpixel(100 + i, 200 - i, RED);
    for (i = 0; i <= 100; i++)
        putpixel(300 - i, 200 - i, BLUE);
    for (i = 0; i <= 200; i++)
        putpixel(100 + i, 200, GREEN);

    getch();
    closegraph();
}