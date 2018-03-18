#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>

int main()
{
clrscr();
int gd=DETECT,gm;
int x,y,i,j;
initgraph(&gd,&gm,"c:\Turboc++\Disk\Turboc3\BGI");
x=getmaxx();
y=getmaxy();
setbkcolor(BLACK);
setcolor(RED);

line(0,(y/2),x,(y/2));
line((x/2),0,(x/2),y);
setcolor(WHITE);
line(0,(y/2),(x/2),0);
line((x/2),0,x,(y/2));
line((x/2),(y/2),0,0);
line((x/2),(y/2),x,0);
line((x/2),(y/2),0,y);
line(0,0,(x/2),(y/2));
line((x/2),(y/2),x,y);
/*for(i=x/2,j=y/2,i++)
{
line(i+10,j+3,i+10,j-3);
}*/
line((x/2)+10,(y/2)+3,(x/2)+10,(y/2)-3);

setcolor(YELLOW);
outtextxy(x*3/4,y*1/4,"Ist Quderant");
//circle(x*3/4,y*1/4);
outtextxy(x*1/4,y*1/4,"IInd Quderant");

circle((x/2),(y/2),20);

outtextxy(x*1/4,y*3/4,"IIIrd Quderant");
outtextxy(x*3/4,y*3/4,"IVth Quderant");


getch();
closegraph();
return 0;
}