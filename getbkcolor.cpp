#include<graphics.h>
#include<stdio.h>
#include<conio.h>

/// getbkcolor function returns the current background color
/// Declaration : int getbkcolor();
/// e.g. color = getbkcolor(); // color is an int variable
/// if current background color is BLACK then color will be 0.

main()
{
   int gd = DETECT, gm, bkcolor;
   char array[100];
   initgraph(&gd,&gm," ");
   bkcolor = getbkcolor();
   sprintf(array,"Current background color = %d", bkcolor);
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
