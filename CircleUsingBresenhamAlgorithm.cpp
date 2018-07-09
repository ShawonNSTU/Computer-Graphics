#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

/// in the process of sacn-converting a circle,
/// the circle is divided into 8 equal parts.
/// (x,y) , (y,x) , (-y,x) , (-x,y)
/// (-x,-y) , (-y,-x) , (y,-x) , (x,-y)

void bresenhamCircle(float x1, float y1, float r)
{
	float x, y, p;
	x = 0;
	y = r;
	p = 3 - ( 2 * r );         // Initial value of decision parameter
	while(x <= y){
		putpixel(x1+x,y1+y,15);
        putpixel(x1+y,y1+x,15);
        putpixel(x1-y,y1+x,15);
        putpixel(x1-x,y1+y,15);
        putpixel(x1-x,y1-y,15);
        putpixel(x1-y,y1-x,15);
        putpixel(x1+y,y1-x,15);
        putpixel(x1+x,y1-y,15);
		x = x + 1;
		if(p < 0) p = p + ( 4 * x ) + 6;
		else{
			p = p + 4 * ( x - y ) + 10;
			y = y - 1;
 		}
 	}
}
main()
{
	int gd = DETECT, gm;
	float x1, y1, r;
	initgraph(&gd, &gm, " ");
	cout<<"Enter the co-ordinates of center: ";
	cin>>x1>>y1;
	cout<<"Enter the value of radius: ";
	cin>>r;
	bresenhamCircle(x1, y1, r);
	getch();
	closegraph();
}
