#include<iostream.h>
#include<conio.h>
#include<graphics.h>


int main()
{

    int gd = DETECT, gm;
    float rx, ry, xc, yc, x, y, p1, p2;



    cout << "Enter the value of X Radius: ";
    cin >> rx;

    cout << "Enter the value of Y Radius: ";
    cin >> ry;

    cout << "Enter X co-ord of MidPoint" << endl;
    cin >> xc;

    cout << "Enter Y co-ord of the MidPoint" << endl;
    cin >> yc;



    initgraph(&gd,&gm,"C:\\TC\\BGI");

    x = 0;
    y = ry;

    putpixel(xc+x, yc+y, 15);
    putpixel(xc+x, yc-y, 15);
    putpixel(xc-x, yc+y, 15);
    putpixel(xc-x, yc-y, 15);


    p1 = (ry * ry) - ( (rx * rx) * ry ) + ( 0.25 * (rx * rx) );


    do {


	if( p1 < 0 ) {

	    x = x + 1;

	    p1 = p1 + ( ( 2 * (ry * ry) ) * x ) + (ry * ry);


	}
	else {

	    x = x + 1;
	    y = y - 1;
	    p1 = p1 + ( ( 2 * (ry*ry)  * x ) - ( ( 2 * (rx*rx) ) * y ) + (ry*ry) );

	}


	    putpixel(xc+x,yc+y,15);
	    putpixel(xc+x,yc-y,15);
	    putpixel(xc-x,yc+y,15);
	    putpixel(xc-x,yc-y,15);



    } while(  ( 2 * (ry*ry) ) * x  <= ( 2 * (rx*rx) ) * y   );



    p2 = (ry * ry) * ((x + 0.5) * (x + 0.5)) + (rx * rx) * ((y - 1) * (y - 1)) - ((rx*rx) * (ry*ry));


    do
    {

	if (p2 > 0) {

	    x = x;
	    y = y - 1;

	    p2 = p2 - (2 * (rx * rx) * y) + (rx * rx);

	}
	else
	{

	    x = x + 1;
	    y = y - 1;

	    p2 = p2 + (2 * (ry * ry) * x) - (2 * (rx * rx) * y) + (rx * rx);

	}

	putpixel(xc+x, yc+y, 15);
	putpixel(xc+x, yc-y, 15);
	putpixel(xc-x, yc+y, 15);
	putpixel(xc-x, yc-y, 15);

    }while(y > 0);



    getch();
    closegraph();
    return 0;


}
