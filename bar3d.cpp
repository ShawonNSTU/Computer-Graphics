#include<graphics.h>
#include<conio.h>

/// Declaration: void bar3d(int left, int top, int right, int bottom, int depth, int topflag);

// bar3d function is used to draw a 3-dimensional, rectangular filled in bar .
// Coordinates of left top and right bottom corner of bar are required to draw the bar.
// left specifies the X-coordinate of top left corner,
// top specifies the Y-coordinate of top left corner,
// right specifies the X-coordinate of right bottom corner,
// bottom specifies the Y-coordinate of right bottom corner,
/// depth specifies the depth of bar in pixels,
/// topflag determines whether a 3 dimensional top is put on the bar or not
/// if it is non-zero then it is put otherwise not.
// Current fill pattern and fill color is used to fill the bar.
//To change fill pattern and fill color use setfillstyle.

main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, " ");
   bar3d(100, 100, 200, 200, 40, 1);
   getch();
   closegraph();
   return 0;
}
