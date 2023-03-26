#include <graphics.h>
#include <conio.h>
void main()
{
    int gd = 0, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    ellipse(200, 200, 0, 360, 100, 50);
    getch();
}
