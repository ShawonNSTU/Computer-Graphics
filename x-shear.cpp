#include<bits/stdc++.h>
#include<graphics.h>

// Input
/// 30 10
/// 30 90
/// 130 90
/// 130 10
/// 2

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    int xx = getmaxx() / 2;
    int yy = getmaxy() / 2;
    for(int i=0; i<=2*xx; i++) putpixel(i,yy,15);       // X axis
    for(int i=0; i<=2*yy; i++) putpixel(xx,i,15);       // Y axis
    int x1, x2, x3, x4, y1, y2, y3, y4;
    printf("Enter The Coordinate of The First Point: ");
    scanf("%d %d",&x1,&y1);
    printf("Enter The Coordinate of The Second Point: ");
    scanf("%d %d",&x2,&y2);
    printf("Enter The Coordinate of The Third Point: ");
    scanf("%d %d",&x3,&y3);
    printf("Enter The Coordinate of The Fourth Point: ");
    scanf("%d %d",&x4,&y4);
    line(x1+xx, yy-y1, x2+xx, yy-y2);
    line(x2+xx, yy-y2, x3+xx, yy-y3);
    line(x3+xx, yy-y3, x4+xx, yy-y4);
    line(x4+xx, yy-y4, x1+xx, yy-y1);
    int shx;
    printf("Enter the shear factor (Shx): ");
    scanf("%d",&shx);
    /// X-shear does not change Y-coordinate, changes are made to only X-coordinate.
    int xx1 = x1 + shx * y1;
    int xx2 = x2 + shx * y2;
    int xx3 = x3 + shx * y3;
    int xx4 = x4 + shx * y4;
    line(xx1+xx, yy-y1, xx2+xx, yy-y2);
    line(xx2+xx, yy-y2, xx3+xx, yy-y3);
    line(xx3+xx, yy-y3, xx4+xx, yy-y4);
    line(xx4+xx, yy-y4, xx1+xx, yy-y1);
    getch();
    closegraph();
    return 0;
}
