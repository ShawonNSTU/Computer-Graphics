#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

/// Reflection is the mirror image of the original object.
/// Basically it's the rotation operation with 180 degree.

// Input
/// 100 100 20 20 150 20

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    int xx = getmaxx() / 2;
    int yy = getmaxy() / 2;
    for(int i=0; i<=2*xx; i++) putpixel(i,yy,15);      // X-axis
    for(int i=0; i<=2*yy; i++) putpixel(xx,i,15);      // Y-axis
    int x1, x2, x3, y1, y2, y3;
    cout<<"Enter First Coordinate of Triangle: ";
    cin>>x1>>y1;
    cout<<"Enter Second Coordinate of Triangle: ";
    cin>>x2>>y2;
    cout<<"Enter Third Coordinate of Triangle: ";
    cin>>x3>>y3;
    line(xx+x1, yy-y1, xx+x2, yy-y2);
    line(xx+x1, yy-y1, xx+x3, yy-y3);
    line(xx+x2, yy-y2, xx+x3, yy-y3);
    /// The mirror reflection transformation Mx about the x-axis is given by
    /// x` = x and y` = -y
    int xx1, xx2, xx3, yy1, yy2, yy3;
    xx1 = x1;
    yy1 = -y1;
    xx2 = x2;
    yy2 = -y2;
    xx3 = x3;
    yy3 = -y3;
    line(xx+xx1, yy-yy1, xx+xx2, yy-yy2);
    line(xx+xx1, yy-yy1, xx+xx3, yy-yy3);
    line(xx+xx2, yy-yy2, xx+xx3, yy-yy3);
    /// The mirror reflection transformation My about the y-axis is given by
    /// x` = -x and y` = y
    xx1 = -x1;
    yy1 = y1;
    xx2 = -x2;
    yy2 = y2;
    xx3 = -x3;
    yy3 = y3;
    setcolor(14);
    line(xx+xx1, yy-yy1, xx+xx2, yy-yy2);
    line(xx+xx1, yy-yy1, xx+xx3, yy-yy3);
    line(xx+xx2, yy-yy2, xx+xx3, yy-yy3);
    getch();
    closegraph();
    return 0;
}
