#include<bits/stdc++.h>
#include<graphics.h>
#include<dos.h>

/// Settextstyle function is used to change the way in which text appears,
/// using it we can modify the size of text, change direction of text and change the font of text.
/// Declaration: void settextstyle( int font, int direction, int charsize);
/// font argument specifies the value of font that is to be used,
/// Direction can be HORIZ_DIR (Left to right) or VERT_DIR (Bottom to top).
/// 0 menas default font.

int main()
{
   int gd = DETECT, gm;
   char array[5];
   initgraph(&gd, &gm, " ");
   settextstyle(0, HORIZ_DIR, 4);
   setcolor(14);
   for(int i=10; i>=0; i--){
      sprintf(array,"%d",i);
      outtextxy(getmaxx()/2, getmaxy()/2, array);
      delay(1000);
      if(!i) break;
      cleardevice();
   }
   closegraph();
   return 0;
}
