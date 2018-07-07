#include<stdio.h>
#include<graphics.h>

/// Begin with a seed(starting pixel) inside the region.
/// It checks to see if the pixel has the region’s original color.
/// If the answer is yes, it fills the pixel with a new color and
/// uses each of the pixel’s neighbors as a new seed in a recursive call.
/// If answer is no , it returns to the caller.

/// This algorithm is used when a region which has to be color with fill color,
/// has more than one boundary color.

void floodFill4(int x, int y, int oldcolor, int fillcolor)
{
    if(getpixel(x,y) == oldcolor){
        putpixel(x,y,fillcolor);
        floodFill4(x+1,y,oldcolor,fillcolor);   // right
        floodFill4(x-1,y,oldcolor,fillcolor);   // left
        floodFill4(x,y+1,oldcolor,fillcolor);   // bottom
        floodFill4(x,y-1,oldcolor,fillcolor);   // top
    }
}
int main()
{
    int gd = DETECT, gm;
    int x, y, radius;
    printf("Enter x and y positions for circle: ");
    scanf("%d %d",&x,&y);
    printf("Enter radius of circle: ");
    scanf("%d",&radius);
    initgraph(&gd, &gm, " ");
    circle(x, y, radius);
    floodFill4(x, y, 0, 14);
    getch();
    closegraph();
    return 0;
}
