#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
void drawline(int x1, int y1, int x2, int y2)
{
    int dx, dy, p, x, y;
    dx = x2 - x1;
    dy = y2 - y1;
    x = x1;
    y = y1;
    p = 2 * dy - dx;                    // base value : decision parameter = 2dy - dx
    while(x < x2){
        putpixel(x, y, 14);
        cout<<p<<" ";
        if(p >= 0){
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        }
        else p = p + 2 * dy;
        x = x + 1;
        cout<<x<<" "<<y<<endl;
    }
    putpixel(x, y, 14);
}
main()
{
    int gdriver = DETECT, gmode, x1, y1, x2, y2;
    initgraph(&gdriver, &gmode, " ");
    printf("\nEnter the x and y value for starting point: ");
    cin>>x1>>y1;
    printf("\nEnter the x and y value for ending point: ");
    cin>>x2>>y2;
    drawline(x1, y1, x2, y2);
    getch();
    closegraph();
    return 0;
}
