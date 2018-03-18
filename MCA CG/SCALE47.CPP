#include <conio.h>
#include <iostream.h>
#include <graphics.h>
#include <math.h>
#include "jay47.h"

int scale(int a, int b)
{
	int x;
	x = a * b;
	return(x);
}

void main()
{
	clrscr();
	int n, j, sx, sy;
	int x[50], y[50], Sx[50], Sy[50];
	int gdriver = DETECT, gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

	cout<<"\nEnter the number of vertices: ";
	cin>>n;
	for(j=0; j<n; j++)
	{
		cout<<"\nEnter the x and y coordinates for "<<j+1<<" st vertex: ";
		cin>>x[j]>>y[j];

	}
	cout<<"\nEnter the Scaling factors for x and y";
	cin>>sx>>sy;
	for(j=0; j<n; j++)
	{
		Sx[j] = scale(x[j], sx);
		Sy[j] = scale(y[j], sy);
	}
	/*for(j=0; j<n; j++)
	{
		cout<<"\nThe x and y coordinates for: "<<j+1<<" st vertex is: ";
		cout<<Tx[j]<<Ty[j];

	}*/
		for(j=0; j<n-1; j++)
		ddaAlgo(x[j], y[j], x[j+1], y[j+1]);

	ddaAlgo(x[0], y[0], x[n-1], y[n-1]);


	for(j=0; j<n-1; j++)
		ddaAlgo(Sx[j], Sy[j], Sx[j+1], Sy[j+1]);
	ddaAlgo(Sx[0], Sy[0], Sx[n-1], Sy[n-1]);

	getch();
	closegraph();
}