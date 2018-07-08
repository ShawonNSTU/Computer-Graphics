#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    setcolor(14);
    for(int i=500; i>=0; i--){
        cleardevice();
        ellipse(200+i,200,0,360,50,30);
        line(250+i,200,280+i,170);
        line(280+i,170,280+i,230);
        line(280+i,230,250+i,200);
        circle(160+i,190,3);
        delay(30);
    }
    getch();
    closegraph();
    return 0;
}
