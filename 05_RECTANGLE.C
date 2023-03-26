#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm, i;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    // line(100, 100, 500, 100);
    // line(500, 100, 500, 300);
    // line(500, 300, 100, 300);
    // line(100, 300, 100, 100);

    for (i = 0; i <= 400; i++)
        putpixel(100 + i, 100, RED);
    for (i = 0; i <= 400; i++)
        putpixel(100 + i, 300, BLUE);
    for (i = 0; i <= 200; i++)
        putpixel(100, 100 + i, YELLOW);
    for (i = 0; i <= 200; i++)
        putpixel(500, 100 + i, GREEN);

    getch();
    closegraph();
}