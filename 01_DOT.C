// DOT
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm, i;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    putpixel(0, 0, WHITE);
    putpixel(100, 0, WHITE);
    putpixel(200, 0, WHITE);
    putpixel(300, 0, WHITE);
    putpixel(400, 0, WHITE);
    putpixel(500, 0, WHITE);
    putpixel(600, 0, WHITE);
    putpixel(639, 0, WHITE);

    putpixel(0, 0, WHITE);
    putpixel(0, 100, WHITE);
    putpixel(0, 200, WHITE);
    putpixel(0, 300, WHITE);
    putpixel(0, 400, WHITE);
    putpixel(0, 479, WHITE);

    getch();
    closegraph();
}