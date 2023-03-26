#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int gd = 0, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    // Road....
    line(0, 422, 800, 422); // Base line (use for road)

    // Car Wheels.....
    circle(200, 400, 20); // Left side wheel
    circle(200, 400, 2);  // under wheel
    circle(400, 400, 20); // right side wheel
    circle(400, 400, 2);  // under wheel

    // Under Wheel Border Design.....
    arc(200, 400, 0, 30, 15); // left side
    arc(200, 400, 50, 80, 15);
    arc(200, 400, 100, 130, 15);
    arc(200, 400, 150, 180, 15);
    arc(200, 400, 200, 230, 15);
    arc(200, 400, 250, 280, 15);
    arc(200, 400, 300, 330, 15);
    arc(400, 400, 0, 30, 15); // right side
    arc(400, 400, 50, 80, 15);
    arc(400, 400, 100, 130, 15);
    arc(400, 400, 150, 180, 15);
    arc(400, 400, 200, 230, 15);
    arc(400, 400, 250, 280, 15);
    arc(400, 400, 300, 330, 15);

    // Wheel Cover...
    arc(200, 400, 0, 180, 27); // left side
    arc(400, 400, 0, 180, 27); // right side

    // Car Structure....
    line(180, 282, 410, 282);     // car floor line
    arc(283, 460, 120, 124, 205); // car floor left side arc
    line(140, 350, 168, 290);     //  back side mirror
    line(100, 350, 140, 350);     // line which one join back mirror and back arc
    arc(110, 373, 115, 235, 25);  // car back side arc
    line(100, 400, 95, 393);      // line which one join back side arc and a line which join with wheel cover
    line(100, 400, 173, 400);     // car back side line which one join arc line and wheel cover
    line(227, 400, 373, 400);     // line which one join wheel covers
    line(427, 400, 550, 400);     // line which one join right side wheel cover and front arc
    arc(550, 375, 270, 90, 25);   // car front side arc
    line(479, 344, 550, 350);     // line which one join front mirror and front arc
    line(480, 345, 423, 290);     //  front side mirror
    arc(320, 467, 60, 64, 205);   // car floor right side arc

    // Car Door....
    line(305, 287, 305, 400);     // door center line (right side door left side line)
    arc(280, 350, 141, 197, 100); // left side door arc
    arc(420, 375, 330, 30, 50);   // right side door arc

    // Windows....
    line(202, 287, 415, 287); // window upper line
    line(215, 287, 215, 350); // left side window left side line
    line(300, 287, 300, 350); // left side window right side line
    line(310, 287, 310, 350); // Right side window left side line
    line(474, 350, 416, 288); // Right side window right side line
    line(180, 350, 473, 350); // window bottom line

    // door handel.....
    line(210, 355, 225, 355); // left side door handel
    line(210, 356, 225, 356);
    line(320, 355, 335, 355); // right side door handel
    line(320, 356, 335, 356);

    // mirror on right side door.....
    line(445, 349, 463, 349); // mirror bottem
    line(445, 349, 445, 340); // mirror left
    line(445, 340, 463, 340); // mirror upper
    line(463, 340, 463, 349); // mirror right

    getch();
    closegraph();
}