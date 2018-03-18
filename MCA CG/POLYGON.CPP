#include<iostream.h>
#include <graphics.h>
#include <math.h>
#include<conio.h>

void drawline(int x1,int y1,int x2,int y2)
{
  int dx,dy,m,s;
  float xi,yi,x,y;
   dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
s = abs(dx);
    else
s = abs(dy);

    xi = dx / (float) s;
    yi = dy / (float) s;

    x = x1;
    y = y1;

    putpixel(x1, y1, WHITE);

    for (m = 0; m < s; m++)
{
x += xi;
y += yi;
putpixel(x, y, WHITE);
    }

}
int main()
{

    int gd = DETECT, gm = DETECT, x1, y1, x2, y2;
		 initgraph(&gd,&gm,"C:\\TC\\BGI");

//    clrscr();

    initgraph(&gd, &gm,NULL);
    drawline(50,30,30,50);
    drawline(30,50,40,70);
    drawline(40,70,60,70);
    drawline(60,70,70,50);
    drawline(70,50,50,30);
    getch();
	return 0;
}

