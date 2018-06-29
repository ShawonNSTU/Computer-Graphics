#include<graphics.h>
#include<stdio.h>
#include<conio.h>

/// getcolor returns the current drawing color/default. The drawing color is the
/// value to which pixels are set when lines and so on are drawn.
/// Declaration : int getcolor();
/// e.g. a = getcolor(); // a is an integer variable
/// if current drawing color is WHITE then a will be 15.

main()
{
   int gd = DETECT, gm, drawing_color;
   char array[100];
   initgraph(&gd,&gm," ");
   drawing_color = getcolor();
   sprintf(array,"Current drawing color = %d", drawing_color);
   outtextxy( 10, 10, array );
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
