#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
main()
{
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, " ");
    float x1, y1, x2, y2;
    printf("\nEnter the x and y value for starting point: ");
    scanf("%f %f",&x1, &y1);
    printf("\nEnter the x and y value for ending point: ");
    scanf("%f %f",&x2, &y2);
    printf("\nThe Line is shown below:\n");
    float m, c;
    float x, y;
    m = (y2 - y1) / (x2 - x1);
    c = y1 - m * x1;
    for(x = x1; x <= x2; x++){
        y = m * x + c;
        cout<<x<<" "<<y<<" ";
        y = ceil(y);
        putpixel(x, (int)y, 15);
        cout<<x<<" "<<y<<endl;
    }
    getch();
    closegraph();
    return 0;
}
