#include<conio.h>
#include<iostream.h>
#include<fstream.h>

int L=255;
typedef unsigned char byte;
byte h[54];
byte pixel;
ofstream out;
ifstream in;
void main()
{
	clrscr();
	int a,b,alpha,beta,gamma,Sa,Sb;
	cout<<"Enter the values of a and b: ";
	cin>>a>>b;
	cout<<"Enter the value of Sa: " ;
	cin>>Sa;
	cout<<"Enter the value of Sb: ";
	cin>>Sb;
	alpha= Sa/a;
	beta= (Sb-Sa)/(b-a);
	gamma= (L-Sb)/(L-b);

	char ipfile[]="c:\\tc\\bin\\falls.bmp";
	char optfile[]="c:\\tc\\bin\\falls1.bmp";

	in.open(ipfile,ios::in|ios::binary);
	out.open(optfile,ios::out|ios::binary);

	in.read((byte*)(&h),sizeof(h));
	out.write((byte*)(&h),sizeof(h));

	while(!in.eof())
	{
		in.read((byte*)(&pixel),sizeof(pixel));
		if((pixel>=0)&&(pixel<a))
		{
			pixel=pixel*alpha;
			out.write((byte*)(&pixel),sizeof(pixel));
		}
		else if((pixel>=a)&&(pixel<b))
		{
			pixel=Sa+(beta*(pixel-a));
			out.write((byte*)(&pixel),sizeof(pixel));
		}
		else if((pixel>=b)&&(pixel<=L))
		{
			pixel=Sb+(gamma*(pixel-b));
			out.write((byte*)(&pixel),sizeof(pixel));
		}
       //	out.write((byte*)(&pixel),sizeof(pixel));
	}
	cout<<"\n Output stored "<<optfile;
	in.close();
	out.close();
	getch();
  }