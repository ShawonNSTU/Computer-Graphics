#include <graphics.h>
#include <conio.h>

/// line function is used to draw a line from a point(x1,y1) to point(x2,y2) i.e.
// (x1,y1) and (x2,y2) are end points of the line.
/// Below are the program that draws a line from (100, 100) to (200, 200).
/// Declaration: void line(int x1, int y1, int x2, int y2);

int main()
{
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, "");
    line(100,100,300,100);
    getch();
    closegraph();
    return 0;
}
