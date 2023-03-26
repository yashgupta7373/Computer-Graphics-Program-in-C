#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    setbkcolor(3); // cyan
    setcolor(9);   // lightblue
    circle(100, 200, 70);
    setcolor(8); // darkgray
    circle(250, 200, 70);
    setcolor(4); // red
    circle(400, 200, 70);
    setcolor(14); // yellow
    circle(175, 270, 70);
    setcolor(2); // green
    circle(325, 270, 70);

    getch();
    closegraph();
}