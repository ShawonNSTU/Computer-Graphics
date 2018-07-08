#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    int x1, x2, x3, y1, y2, y3, xx1, xx2, xx3, yy1, yy2, yy3, xx, yy;
    float ang;
    initgraph(&gd, &gm, " ");
    xx = getmaxx() / 2;
    yy = getmaxy() / 2;
    for(int i=0; i<=2*xx; i++) putpixel(i,yy,15);
    for(int i=0; i<=2*yy; i++) putpixel(xx,i,15);
    printf("Enter The Coordinate of The First Point: ");
    scanf("%d %d",&x1,&y1);
    printf("Enter The Coordinate of The Second Pixel: ");
    scanf("%d %d",&x2,&y2);
    printf("Enter The Coordinate of The Third Pixel: ");
    scanf("%d %d",&x3,&y3);
    line(x1+xx, yy-y1, x2+xx, yy-y2);
    line(x1+xx, yy-y1, x3+xx, yy-y3);
    line(x2+xx, yy-y2, x3+xx, yy-y3);
    printf("Enter The Rotation Angle: ");
    scanf("%f",&ang);
    ang = ( ang * ( 3.1416 / 180.0 ) );
    xx1 = ( ( x1 * cos(ang) ) - ( y1 * sin(ang) ) );
    xx2 = ( ( x2 * cos(ang) ) - ( y2 * sin(ang) ) );
    xx3 = ( ( x3 * cos(ang) ) - ( y3 * sin(ang) ) );
    yy1 = ( ( x1 * sin(ang) ) + ( y1 * cos(ang) ) );
    yy2 = ( ( x2 * sin(ang) ) + ( y2 * cos(ang) ) );
    yy3 = ( ( x3 * sin(ang) ) + ( y3 * cos(ang) ) );
    line(xx1+xx,yy-yy1,xx2+xx,yy-yy2);
    line(xx1+xx,yy-yy1,xx3+xx,yy-yy3);
    line(xx2+xx,yy-yy2,xx3+xx,yy-yy3);
    getch();
    closegraph();
    return 0;
}
