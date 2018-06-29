#include <graphics.h>
#include <conio.h>

/// Declaration: void bar(int left, int top, int right, int bottom);

// Bar function is used to draw a 2-dimensional, rectangular filled in bar .
// Coordinates of left top and right bottom corner are required to draw the bar.
// Left specifies the X-coordinate of top left corner,
// top specifies the Y-coordinate of top left corner,
// right specifies the X-coordinate of right bottom corner,
// bottom specifies the Y-coordinate of right bottom corner.
// Current fill pattern and fill color is used to fill the bar.
// To change fill pattern and fill color use setfillstyle.

main()
{
   int gd = DETECT;
   int gm;
   initgraph(&gd, &gm, " ");
   bar(100, 100, 200, 200);
   getch();
   closegraph();
   return 0;
}
