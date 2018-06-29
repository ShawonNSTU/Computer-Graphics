#include<graphics.h>
#include<conio.h>

/// Declaration: void rectangle(int left, int top, int right, int bottom);
// rectangle function is used to draw a rectangle.
// Coordinates of left top and right bottom corner are required to draw the rectangle.
// left specifies the X-coordinate of top left corner,
// top specifies the Y-coordinate of top left corner,
// right specifies the X-coordinate of right bottom corner,
// bottom specifies the Y-coordinate of right bottom corner.
// The code given below draws a rectangle.

main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, " ");
   rectangle(100,100,200,200);
   getch();
   closegraph();
   return 0;
}
