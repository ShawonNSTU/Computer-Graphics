#include<graphics.h>
#include<conio.h>

/// outtext function displays text.

/// Declaration: void outtext(char *string);

main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, " ");
   outtext("Outtext");
   getch();
   closegraph();
   return 0;
}
