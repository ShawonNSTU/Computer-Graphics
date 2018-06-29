#include<graphics.h>
#include<stdio.h>
#include<conio.h>

/// getmaxcolor function returns maximum color value for current graphics mode and driver.
/// Declaration: int getmaxcolor();

main()
{
   int gd = DETECT, gm, max_colors;
   char array[100];
   initgraph(&gd,&gm," ");
   max_colors = getmaxcolor();
   sprintf(array,"Maximum color value for current graphics mode and driver = %d",max_colors);
   outtextxy(0, 40, array);
   getch();
   closegraph();
   return 0;
}
/*
                                Color	       Value

                                BLACK	        0
                                BLUE	        1
                                GREEN	        2
                                CYAN	        3
                                RED	            4
                                MAGENTA	        5
                                BROWN	        6
                                LIGHTGRAY       7
                                DARKGRAY        8
                                LIGHTBLUE       9
                                LIGHTGREEN	    10
                                LIGHTCYAN	    11
                                LIGHTRED	    12
                                LIGHTMAGENTA	13
                                YELLOW	        14
                                WHITE	        15
*/
