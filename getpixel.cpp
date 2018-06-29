#include<graphics.h>
#include<stdio.h>
#include<conio.h>

/// getpixel function returns the color of pixel present at location(x, y).
/// Declaration: int getpixel(int x, int y);

main()
{
  int gd = DETECT, gm, color;
  char array[50];
  initgraph(&gd,&gm," ");
  color = getpixel(1, 2);
  sprintf(array,"color of pixel at (1,2) = %d",color);
  outtext(array);
  getch();
  closegraph();
  return 0;
}
