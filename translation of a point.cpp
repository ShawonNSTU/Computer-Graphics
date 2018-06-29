#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void translationOfPoint(int x, int y, int tx, int ty)
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    cout<<"Original Coordinates : "<<"("<<x<<","<<y<<")";
    putpixel(x, y, 15);
    // calculating translated coordinates
    x = x + tx;
    y = y + ty;
    cout<<"\nTranslated Coordinates : "<<"("<<x<<","<<y<<")";
    putpixel(x, y, 14);
    getch();
    closegraph();
}
int main()
{
    int x, y, tx, ty;
    scanf("%d %d",&x,&y);       // coordinates of point
    scanf("%d %d",&tx,&ty);     // translation factor
    translationOfPoint(x, y, tx, ty);
    return 0;
}
