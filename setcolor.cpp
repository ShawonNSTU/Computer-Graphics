#include<graphics.h>
#include<conio.h>

/// Declaration: void setcolor(int color);
/// setcolor function is used to change the current drawing color.
/// e.g. setcolor(YELLOW) or setcolor(14) changes the current drawing color to RED.
/// Remember that default drawing color is WHITE.

main()
{
   int gd = DETECT, gm;
   initgraph(&gd,&gm," ");
   circle(100,100,50);          /* drawn in white color */
   setcolor(YELLOW);
   circle(200,200,50);          /* drawn in red color   */
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
