#include <graphics.h>
#include <conio.h>

/// Declaration: void floodfill(int x, int y, int border);
/// floodfill function is used to fill an enclosed area.
/// Current fill color is used to fill the area.
/// (x, y) is any point on the screen.
/// if (x,y) lies inside the area
/// then inside will be filled with fill color and
/// border specifies the color of boundary of area.
/// To change fill color use setfillstyle.

// setfillstyle function sets the current fill pattern and fill color.
/// Declaration: void setfillstyle( int pattern, int color);

main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, " ");
   setfillstyle(SOLID_FILL, RED);
   setcolor(YELLOW);
   circle(100,100,50);
   floodfill(100,100,YELLOW);
   getch();
   closegraph();
   return 0;
}
