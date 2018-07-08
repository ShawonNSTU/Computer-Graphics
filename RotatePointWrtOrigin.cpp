#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
const double PI = 3.14159265;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    int xx = getmaxx() / 2;
    int yy = getmaxy() / 2;
    for(int i=0; i<=2*xx; i++) putpixel(i,yy,15);
    for(int i=0; i<=2*yy; i++) putpixel(xx,i,15);
    int x1, y1;
    printf("Enter The Coordinate of The Point: ");
    scanf("%d %d",&x1,&y1);
    putpixel(x1+xx, yy-y1, YELLOW);
    float angle;
    printf("Enter The Rotation Angle: ");
    scanf("%f",&angle);
    /// positive rotation angle means direction of circular path / rotation is counter-clockwise.
    /// if negative then clockwise.
    angle = ( angle * ( PI / 180.0 ) );      // converting degree to radians
    int xx1 = ( ( x1 * cos(angle) ) - ( y1 * sin(angle) ) );
    int yy1 = ( ( x1 * sin(angle) ) + ( y1 * cos(angle) ) );
    putpixel(xx1+xx,yy-yy1,WHITE);
    getch();
    closegraph();
    return 0;
}
