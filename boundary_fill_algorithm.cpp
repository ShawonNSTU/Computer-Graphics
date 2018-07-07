#include<stdio.h>
#include<graphics.h>

/// This algorithm begins with a starting pixel, called a seed inside the region.
/// The algorithm checks to see if this pixel is a boundary pixel
/// or has already been filled.
/// If the answer is no, it fills the pixel and makes a recursive call to itself
/// using each and every neighboring pixel as a new seed.
/// If the answer is yes, the algorithm simply returns to its caller.

/// This algorithm may not fill regions correctly if some interior pixels
/// are already displayed in the fill color.
/// Encountering a pixel with the fill color can cause a recursive branch to terminate,
/// leaving other interior pixels unfilled.
/// This occurs because the algorithm checks next pixels both for boundary color and fill color.
/// To avoid this, we can first change the color of any interior pixels
/// that are initially set to the fill color before applying this procedure.

/// This algorithm is used when a region which has to be color with fill color,
/// has one boundary color and inside the region can have more than one color.

void boundaryfill4(int x, int y, int fill, int boundary)
{
    int current;
    current = getpixel(x,y);
    if(current != boundary && current != fill){
        putpixel(x, y, fill);
        boundaryfill4(x+1,y,fill,boundary);     // right
        boundaryfill4(x-1,y,fill,boundary);     // left
        boundaryfill4(x,y+1,fill,boundary);     // bottom
        boundaryfill4(x,y-1,fill,boundary);     // top
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
    boundaryfill4(x, y, 4, 15);
    getch();
    closegraph();
    return 0;
}
