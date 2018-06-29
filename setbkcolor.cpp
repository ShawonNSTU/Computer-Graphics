#include<graphics.h>
#include<stdio.h>
#include<conio.h>

/// Declaration: void setbkcolor(int color);
/// setbkcolor function changes current background color
/// e.g. setbkcolor(RED) changes the current background color to RED.
/// Remember that default drawing color is WHITE and background color is BLACK.

main()
{
   int gd = DETECT, gm, bkcolor;
   char array[100];
   initgraph(&gd, &gm, " ");
   outtext("Press any key to change the background color to RED.");
   getch();
   setbkcolor(RED);
   bkcolor = getbkcolor();
   sprintf(array,"Current background color = %d", bkcolor);
   outtextxy( 50, 50, array );
   getch();
   closegraph();
   return 0;
}
