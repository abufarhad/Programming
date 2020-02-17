#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
  int gdriver = DETECT, gmode;
  int x1 = 200, y1 = 200;
  int x2 = 300, y2 = 300;

  initgraph(&gdriver, &gmode, "");
  putpixel(30,40, YELLOW);
  //putp
  getch();
  closegraph();
}
