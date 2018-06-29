#include<graphics.h>
#include<stdio.h>
#include<conio.h>

// sprintf stands for “String print”.
// Instead of printing on console, it store output on char buffer which are specified in sprintf

/// getmaxy function returns the maximum Y coordinate for current graphics mode and driver.

/// Declaration: int getmaxy();

main()
{
   int gd = DETECT;
   int gm, max_y;
   char array[100];
   initgraph(&gd,&gm," ");
   max_y = getmaxy();
   sprintf(array, "Maximum Y coordinate for current graphics mode and driver = %d.",max_y);
   outtext(array);
   getch();
   closegraph();
   return 0;
}
