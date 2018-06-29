#include <graphics.h>
#include <conio.h>

/// Settextstyle function is used to change the way in which text appears,
/// using it we can modify the size of text, change direction of text and change the font of text.
/// Declaration: void settextstyle( int font, int direction, int charsize);
/// font argument specifies the value of font that is to be used,
/// Direction can be HORIZ_DIR (Left to right) or VERT_DIR (Bottom to top).

main()
{
   int gd = DETECT, gm, x = 25, y = 25, font = 0;
   initgraph(&gd,&gm," ");
   for (font = 0; font <= 10; font++){
      settextstyle(font, HORIZ_DIR, 1);
      outtextxy(x, y, "Text with different fonts");
      y = y + 25;
   }
   getch();
   closegraph();
   return 0;
}
/*
   DEFAULT_FONT                     0
   TRIPLEX_FONT,                    1
   SMALL_FONT,                      2
   SANS_SERIF_FONT,                 3
   GOTHIC_FONT,                     4
   SCRIPT_FONT,                     5
   SIMPLEX_FONT,                    6
   TRIPLEX_SCR_FONT,                7
   COMPLEX_FONT,                    8
   EUROPEAN_FONT,                   9
   BOLD_FONT                        10
*/
