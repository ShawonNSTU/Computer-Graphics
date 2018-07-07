#include<graphics.h>
#include<conio.h>

// Declaration of fillellipse function :-
/// void fillellipse(int x, int y, int xradius, int yradius);
/// x and y are coordinates of center of the ellipse
/// xradius and yradius are x and y radius of ellipse respectively.
/// here stangle and endangle are 0 and 360 respectively by default.
/// horizontal radius are xradius, and vertical radius yradius

// setfillstyle function sets the current fill pattern and fill color.
/// Declaration: void setfillstyle( int pattern, int color);

main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, " ");
   setfillstyle(SOLID_FILL, RED);
   fillellipse(200, 200, 50, 20);
   getch();
   closegraph();
   return 0;
}
