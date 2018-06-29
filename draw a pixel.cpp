#include <graphics.h>
#include <conio.h>

/// putpixel function plots a pixel at location (x, y) of specified color.
/// Declaration: void putpixel(int x, int y, int color);
/// For example,if we want to draw a WHITE color pixel at (400, 200)
/// then we will write putpixel(400, 200, WHITE);

main()
{
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, " ");
    for(int i=1;i<=100;i++)
        putpixel(400+i,200,YELLOW);
    getch();
    closegraph();
    return 0;
}
