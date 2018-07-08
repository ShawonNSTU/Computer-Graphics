#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

// Input
/// 100 100
/// 50
/// 150
/// 150

int main()
{
    int gd = DETECT, gm, x, y, r, tx, ty;
    initgraph(&gd, &gm, " ");
    printf("Please Enter Center Coordinate of The Circle: ");
    scanf("%d %d",&x,&y);
    printf("Enter The Radius Of The Circle: ");
    scanf("%d",&r);
    circle(x, y, r);
    printf("Enter The Translation Factor along X-axis: ");
    scanf("%d",&tx);
    printf("Enter The Translation Factor along Y-axis: ");
    scanf("%d",&ty);
    setcolor(6);
    circle(x+tx, y+ty, r);
    getch();
    closegraph();
    return 0;
}
