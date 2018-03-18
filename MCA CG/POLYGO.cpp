#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream.h>
int gd = DETECT, gm  , i, x1, y1, x2, y2;
float xi, yi, x, y,s,dx,dy;
void dda(int x1,int y1,int x2,int y2)
{
	dx = x2 - x1;
	dy = y2 - y1;

	if (abs(dx) > abs(dy))
	s = abs(dx);
	else
	s = abs(dy);

	xi = dx/s;
	yi = dy/s;

	x = x1;
	y = y1;

	for (i = 0; i < s; i++)
	{
		x = x + xi;
		y = y + yi;
		putpixel(floor(x),floor(y), 4);
	}

}
void main()
{
    int no;
    int x1[100],y1[100];
    clrscr();

    cout<<"\nEnter number of edges : ";
    cin>>no;
    for(int i=0;i<no;i++)
    {
    cout<<"\nEnter the x coordinate of vertex "<<i<<" : ";
    cin>>x1[i];
    cout<<"\nEnter the y coordinate of vertex "<<i<<" : ";
    cin>>y1[i];
    }
    initgraph(&gd, &gm, "c:\\tc\\bgi\\");
    cleardevice();

    for(int j=0;j<no-1;j++)
    {
	dda(x1[j],y1[j],x1[j+1],y1[j+1]);
    }
	dda(x1[no-1],y1[no-1],x1[0],y1[0]);
    getch();


}

