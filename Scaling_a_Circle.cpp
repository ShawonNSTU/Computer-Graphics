#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm, x, y, r, s;
    initgraph(&gd, &gm, " ");
    printf("Enter The Center Coordinate of The Circle: ");
    scanf("%d %d",&x,&y);
    printf("Enter The Radius Of The Circle: ");
    scanf("%d",&r);
    circle(x, y, r);
    printf("Enter Scaling Factor: ");
    scanf("%d",&s);
    int t;
    printf("Enter Your Choice.\n1 For Increment\n2 For Decrement\n");
    scanf("%d",&t);
    if(t == 1) circle(x, y, r*s);
    else if(t == 2) circle(x, y, r/s);
    else printf("Wrong Input\n");
    getch();
    closegraph();
    return 0;
}
