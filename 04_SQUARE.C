#include < stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm, i;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    // line(100, 100, 400, 100);
    // line(400, 100, 400, 400);
    // line(400, 400, 100, 400);
    // line(100, 400, 100, 100);

    for (i = 0; i <= 300; i++)
        putpixel(100 + i, 100, RED);
    for (i = 0; i <= 300; i++)
        putpixel(100 + i, 400, BLUE);
    for (i = 0; i <= 300; i++)
        putpixel(100, 100 + i, YELLOW);
    for (i = 0; i <= 300; i++)
        putpixel(400, 100 + i, GREEN);

    getch();
    closegraph();
}