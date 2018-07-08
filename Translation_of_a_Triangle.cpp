#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

// Input
/// 100 100
/// 20 200
/// 200 200
/// 150
/// 150

int main()
{
    int gd = DETECT, gm;
    int x1, x2, x3, y1, y2, y3, tx, ty;
    initgraph(&gd, &gm, " ");
    printf("Enter The Coordinate of The First Point: ");
    scanf("%d %d",&x1,&y1);
    printf("Enter The Coordinate of The Second Point: ");
    scanf("%d %d",&x2,&y2);
    printf("Enter The Coordinate of The Third Point: ");
    scanf("%d %d",&x3,&y3);
    line(x1, y1, x2, y2);
    line(x1, y1, x3, y3);
    line(x2, y2, x3, y3);
    printf("Enter The Translation Factor along X-axis: ");
    scanf("%d",&tx);
    printf("Enter The Translation Factor along Y-axis: ");
    scanf("%d",&ty);
    setcolor(6);
    line(x1+tx, y1+ty, x2+tx, y2+ty);
    line(x1+tx, y1+ty, x3+tx, y3+ty);
    line(x2+tx, y2+ty, x3+tx, y3+ty);
    getch();
    closegraph();
    return 0;
}
