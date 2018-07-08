#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    rectangle(150,180,320,300);
    rectangle(50,180,150,300);
    rectangle(80,250,120,300);
    line(100,100,50,180);
    line(100,100,300,100);
    line(300,100,320,180);
    getch();
    closegraph();
}
