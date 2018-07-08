#include<bits/stdc++.h>
#include<graphics.h>

// Input
/// 10 5
/// 10 60
/// 60 60
/// 60 5
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
    int shy;
    printf("Enter the shear factor (Shy): ");
    scanf("%d",&shy);
    /// Y-shear does not change X-coordinate, changes are made to only Y-coordinate.
    int yy1 = y1 + shy * x1;
    int yy2 = y2 + shy * x2;
    int yy3 = y3 + shy * x3;
    int yy4 = y4 + shy * x4;
    line(x1+xx, yy-yy1, x2+xx, yy-yy2);
    line(x2+xx, yy-yy2, x3+xx, yy-yy3);
    line(x3+xx, yy-yy3, x4+xx, yy-yy4);
    line(x4+xx, yy-yy4, x1+xx, yy-yy1);
    getch();
    closegraph();
    return 0;
}
