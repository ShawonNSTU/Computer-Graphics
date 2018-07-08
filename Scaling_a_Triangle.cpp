#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

// Input
/// 100 50 130 150 30 150

int main()
{
    int gd = DETECT, gm;
    int x1, x2, x3, y1, y2, y3, sx, sy, ch;
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
    printf("Enter The Scaling Factor (Sx) along X-axis: ");
    scanf("%d",&sx);
    printf("Enter The Scaling Factor (Sy) along Y-axis: ");
    scanf("%d",&sy);
    printf("Enter Choice\n1 For Increment\n2 for Decrement.\n");
    scanf("%d",&ch);
    if(ch == 1){
        line(x1*sx, y1*sy, x2*sx, y2*sy);
        line(x1*sx, y1*sy, x3*sx, y3*sy);
        line(x2*sx, y2*sy, x3*sx, y3*sy);
    }
    else if(ch == 2){
        line(x1/sx, y1/sy, x2/sx, y2/sy);
        line(x1/sx, y1/sy, x3/sx, y3/sy);
        line(x2/sx, y2/sy, x3/sx, y3/sy);
    }
    else printf("Invalid Input.\n");
    getch();
    closegraph();
    return 0;
}
