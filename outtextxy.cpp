#include<graphics.h>
#include<conio.h>

/// outtextxy function display text or string at a specified point(x,y) on the screen.
/// Declaration: void outtextxy(int x, int y, char *string);
// x, y are coordinates of the point and third argument contains the address of string to be displayed.

main()
{
   int gd = DETECT, gm;
   initgraph(&gd,&gm," ");
   outtextxy(400, 20, "Outtextxy function");
   getch();
   closegraph();
   return 0;
}
