#include<graphics.h>
#include<conio.h>

/// Syntax : void initgraph(int *graphdriver, int *graphmode, char *pathtodriver);
// initgraph initializes the graphics system by loading a graphics driver from disk
// and putting the system into graphics mode.
// You can tell initgraph to use a particular graphics driver and mode,
// or to autodetect the attached video adapter at run time and pick the corresponding driver.
/// If you tell initgraph to autodetect then you have to use 'DETECT' or 0 .

/// Syntax : void closegraph();
// closegraph deallocates all memory allocated by the graphics system,
// then restores the screen to the mode it was in before you called initgraph.

main()
{
   int gd = 0;
   int gm;
   initgraph(&gd, &gm, " ");
   getch();
   closegraph();
   return 0;
}
