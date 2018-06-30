#include <bits/stdc++.h>
#include <graphics.h>
#include <dos.h>
using namespace std;

/// Delay function is used to suspend execution of a program for a particular time.
// Declaration : void delay(unsigned int);
// Here unsigned int is the number of milliseconds.
/// To use delay function in your program you should include the "dos.h" header file.

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, " ");
   settextstyle(EUROPEAN_FONT, HORIZ_DIR, 1);
   outtextxy(170, 180, "LOADING, PLEASE WAIT");
   int x = 170;
   for(int i=0; i<290; i++){
       delay(30);
       line(x,200,x,220);
       ++x;
   }
   getch();
   closegraph();
   return 0;
}
