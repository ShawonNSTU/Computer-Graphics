#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void draw(int x1, int y1, int x2, int y2)
{
    float x, y, xinc, yinc, dx, dy;
    int k, m;
    int step;
    dx = x2 - x1;
    dy = y2 - y1;
    if(dx > dy)
        step = dx;
    else
        step = dy;
    xinc = dx / step;
    yinc = dy / step;
    if(dx == (float) step) m = 0;
    else m = 2;
    x = x1;
    y = y1;
    putpixel(x, y, 14);
    for(k = 1; k <= step; k++){
        x = x + xinc;
        y = y + yinc;
        if(m == 0){
            double z = ceil((double)y);
            printf("%f %f %f %f\n",x,y,x,z);
            putpixel(x, z, 15);
        }
        else{
            double z = ceil((double)x);
            printf("%f %f %f %f\n",x,y,z,y);
            putpixel(z, y, 15);
        }
    }
}
main()
{
    int x1, y1, x2, y2;
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, " ");
    printf("\nEnter the x and y value for starting point: ");
    scanf("%d %d",&x1, &y1);
    printf("\nEnter the x and y value for ending point: ");
    scanf("%d %d",&x2, &y2);
    printf("\nThe Line is shown below:\n");
    draw(x1, y1, x2, y2);
    getch();
    closegraph();
}
