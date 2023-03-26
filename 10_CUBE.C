#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm, i;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    for (i = 0; i <= 200; i++)
        putpixel(100 + i, 100, RED);
    for (i = 0; i <= 200; i++)
        putpixel(100, 100 + i, BLUE);
    for (i = 0; i <= 200; i++)
        putpixel(100 + i, 300, YELLOW);
    for (i = 0; i <= 200; i++)
        putpixel(300, 100 + i, GREEN);

    for (i = 0; i <= 200; i++)
        putpixel(200 + i, 200, BLUE);
    for (i = 0; i <= 200; i++)
        putpixel(200, 200 + i, RED);
    for (i = 0; i <= 200; i++)
        putpixel(200 + i, 400, GREEN);
    for (i = 0; i <= 200; i++)
        putpixel(400, 200 + i, YELLOW);

    for (i = 0; i <= 100; i++)
        putpixel(100 + i, 100 + i, GREEN);
    for (i = 0; i <= 100; i++)
        putpixel(300 + i, 300 + i, BLUE);
    for (i = 0; i <= 100; i++)
        putpixel(100 + i, 300 + i, YELLOW);
    for (i = 0; i <= 100; i++)
        putpixel(300 + i, 100 + i, RED);

    getch();
    closegraph();
}