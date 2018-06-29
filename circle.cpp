#include<graphics.h>
#include<conio.h>

/// Declaration: void circle(int x, int y, int radius);

// Circle function is used to draw a circle with center (x,y)
// and third parameter specifies the radius of the circle.
// The code given below draws a circle.

main()
{
   int gd = DETECT;
   int gm;
   initgraph(&gd, &gm, " ");
   circle(100, 100, 50);
   getch();
   closegraph();
   return 0;
}
