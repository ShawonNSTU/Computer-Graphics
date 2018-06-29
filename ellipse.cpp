#include<graphics.h>
#include<conio.h>

// Declarations of ellipse function :-
/// void ellipse(int x, int y, int stangle, int endangle, int xradius, int yradius);
/// Ellipse is used to draw an ellipse
/// (x,y) are coordinates of center of the ellipse,
/// stangle is the starting angle, end angle is the ending angle,
/// and fifth and sixth parameters specifies the X and Y radius of the ellipse.
/// To draw a complete ellipse strangles and end angle should be 0 and 360 respectively.

main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, " ");
   ellipse(200, 200, 0, 360, 50, 20);
   getch();
   closegraph();
   return 0;
}
