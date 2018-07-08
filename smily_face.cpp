#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
	int graphicdriver = DETECT, graphicmode;
	initgraph(&graphicdriver, &graphicmode, " ");
	setcolor(14);
	circle(300, 100, 40);
	setfillstyle(SOLID_FILL, 14);
	floodfill(300, 100, 14);
	setcolor(BLACK);
	setfillstyle(SOLID_FILL, BLACK);
	fillellipse(310, 85, 4, 4);
    fillellipse(290, 85, 4, 4);
	ellipse(300, 105, 225, 325, 20, 9);
	ellipse(300, 105, 225, 325, 20, 10);
	getch();
	return 0;
}
