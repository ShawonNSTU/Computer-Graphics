#include<graphics.h>
#include<stdio.h>
#include<conio.h>

// sprintf stands for “String print”.
// Instead of printing on console, it store output on char buffer which are specified in sprintf

/// getmaxx function returns the maximum X coordinate for current graphics mode and driver.

/// Declaration: int getmaxx();

main()
{
   int gd = DETECT;
   int gm, max_x;
   char array[100];
   initgraph(&gd,&gm," ");
   max_x = getmaxx();
   sprintf(array, "Maximum X coordinate for current graphics mode and driver = %d.",max_x);
   outtext(array);
   getch();
   closegraph();
   return 0;
}
