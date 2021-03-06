#include<stdio.h>
#include<graphics.h>
void pixel(int X,int Y,int x,int y)
{
    /// in the process of sacn-converting a circle,
    /// the circle is divided into 8 equal parts.
    /// (x,y) , (y,x) , (-y,x) , (-x,y)
    /// (-x,-y) , (-y,-x) , (y,-x) , (x,-y)

    putpixel(X+x,Y+y,14);
    putpixel(X+y,Y+x,14);
    putpixel(X-y,Y+x,14);
    putpixel(X-x,Y+y,14);
    putpixel(X-x,Y-y,14);
    putpixel(X-y,Y-x,14);
    putpixel(X+y,Y-x,14);
    putpixel(X+x,Y-y,14);
}
main()
{
    int gd = DETECT, gm, X, Y, r, x, y, p;
    initgraph(&gd, &gm, " ");
    printf("Enter the value of X: ");
    scanf("%d",&X);
    printf("Enter the value of Y: ");
    scanf("%d",&Y);
    printf("Enter the Radius of circle: ");
    scanf("%d",&r);
    x = 0;
    y = r;
    p = 1 - r;                  // Initial value of decision parameter
    pixel(X, Y, x, y);
    while(x < y){
        if(p < 0){
            x = x + 1;
            p = p + (2 * x) + 1;
        }
        else{
            x = x + 1;
            y = y - 1;
            p = p + 2 * (x - y) + 1;
        }
        pixel(X, Y, x, y);
    }
    getch();
    closegraph();
}
