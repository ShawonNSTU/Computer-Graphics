#include<graphics.h>
main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, " ");
   setcolor(YELLOW);
   rectangle(0,30,639,450);
   settextstyle(0,HORIZ_DIR,2);
   setcolor(15);
   outtextxy(255,0,"Bar Chart");
   line(100,420,100,60);
   line(100,420,600,420);
   line(90,70,100,60);
   line(110,70,100,60);
   line(590,410,600,420);
   line(590,430,600,420);
   outtextxy(95,40,"Y");
   outtextxy(610,410,"X");
   outtextxy(90,425,"O");
   setfillstyle(SOLID_FILL,BLUE);
   bar(150,100,200,419);
   setfillstyle(SOLID_FILL,RED);
   bar(225,150,275,419);
   setfillstyle(SOLID_FILL,GREEN);
   bar(300,200,350,419);
   setfillstyle(SOLID_FILL,MAGENTA);
   bar(375,125,425,419);
   setfillstyle(SOLID_FILL,BROWN);
   bar(450,175,500,419);
   getch();
   return 0;
}
