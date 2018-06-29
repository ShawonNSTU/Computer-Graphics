#include <graphics.h>
#include <conio.h>

/// Declaration: void cleardevice();
// cleardevice function clears the screen in graphics mode
// and sets the current position to (0,0).
// Clearing the screen consists of filling the screen with current background color.

main()
{
   int gd = DETECT;
   int gm;
   initgraph(&gd, &gm, " ");
   outtext("Press any key to clear the screen.");
   getch();
   cleardevice();
   outtext("Press any key to exit...");
   getch();
   closegraph();
   return 0;
}
