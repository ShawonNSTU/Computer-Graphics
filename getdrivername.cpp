#include<graphics.h>

/// Here 640*480 means max of x and y.

main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, " ");
   outtextxy(200, 200, getdrivername());
   outtextxy(300, 300, getmodename(0));
   getch();
   closegraph();
   return 0;
}
