#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
clrscr();
int gd=DETECT , gm;
initgraph(&gd,&gm,"D:/TC/BGI");
int L, x1,x2,y1,y2,k;
float dlx,dly,xnew,ynew,dx,dy,xi,yi,pk,xk,yk;
cout<<"Enter the values for x1,y1:";
cin>>x1>>y1;
cout<<"Enter the values for x2,y2:";
cin>>x2>>y2;

dx=(x2-x1);
dy=(y2-y1);

	if(abs(dy)>abs(dx))
	L=abs(dy);
	else
	L=abs(dx);

	if(dx>0)
	xi=1;
	else if(dx<0)
	xi=-1;
	else xi=0;

	if(dy>0)
	yi=1;
	else if(dy<0)
	yi=-1;
	else yi=0;

	xk=x1;
	yk=y1;

	pk=2*abs(dy)-abs(dx);

	for(k=0;k<=L;k++)
	{
	if(pk<0)
	{
	xk=xk+xi;
	yk=yk;
	pk=pk+2*abs(dy);
	putpixel(xk,yk,WHITE);
	}
	else
	{
	xk=xk+xi;
	yk=yk+yi;
	pk=pk+2*abs(dy)-2*abs(dx);
	putpixel(xk,yk,WHITE);
	}
	}
	
	

getch();
closegraph();
}
