#include<stdio.h>
#include<graphics.h>
void pixel(int xc,int yc,int x,int y)
{
    putpixel(xc+x,yc+y,7);
    putpixel(xc+y,yc+x,7);
    putpixel(xc-y,yc+x,7);
    putpixel(xc-x,yc+y,7);
    putpixel(xc-x,yc-y,7);
    putpixel(xc-y,yc-x,7);
    putpixel(xc+y,yc-x,7);
    putpixel(xc+x,yc-y,7);
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
    p = 1 - r;
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
