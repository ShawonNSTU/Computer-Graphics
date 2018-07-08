#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

// Input
/// 100 100
/// 200 200
/// 100
/// 200

int main()
{
    int gd = DETECT, gm;
    int x1, x2, y1, y2, tx, ty;
    initgraph(&gd, &gm, " ");
	printf("Enter The Coordinate of The First Point: ");
    scanf("%d %d",&x1,&y1);
    printf("Enter The Coordinate of The Second Point: ");
    scanf("%d %d",&x2,&y2);
    line(x1, y1, x2, y2);
	printf("Enter The Translation Factor along X-axis: ");
    scanf("%d",&tx);
    printf("Enter The Translation Factor along Y-axis: ");
    scanf("%d",&ty);
    setcolor(6);
	line(x1+tx, y1+ty, x2+tx, y2+ty);
	getch();
	closegraph();
	return 0;
}
