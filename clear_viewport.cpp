#include<graphics.h>
#include<conio.h>

// setviewport function sets the current viewport for graphics output.
/// Declaration: void setviewport(int left, int top, int right, int bottom, int clip);
// setviewport function is used to restrict drawing to a particular portion on the screen.
// For example, setviewport(100,100,200,200,0);
// will restrict our drawing activity inside the rectangle(100,100, 200, 200).
// left, top, right, bottom are the coordinates of main diagonal of rectangle
// in which we wish to restrict our drawing.

// Clearviewport():-Clears the current viewport.
/// Syntax: void clearviewport();

main()
{
   int gd = DETECT, gm, midx, midy;
   initgraph(&gd, &gm, " ");
   midx = getmaxx()/2;
   midy = getmaxy()/2;
   setviewport(midx - 50, midy - 50, midx + 50, midy + 50, 0); // 0 means no clipping
   circle(50, 50, 50);
   getch();
   clearviewport();
   getch();
   closegraph();
   return 0;
}
