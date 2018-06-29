#include <graphics.h>
#include <conio.h>

/// Declaration: void arc(int x, int y, int stangle, int endangle, int radius);
// arc function is used to draw an arc with center (x,y) and stangle specifies
// starting angle, endangle specifies the end angle and last parameter specifies
// the radius of the arc. arc function can also be used to draw a circle but for
// that starting angle and end angle should be 0 and 360 respectively.s

main()
{
   int gd = DETECT;
   int gm;
   initgraph(&gd, &gm, " ");
   arc(100, 100, 0, 135, 50);
   getch();
   closegraph();
   return 0;
}
