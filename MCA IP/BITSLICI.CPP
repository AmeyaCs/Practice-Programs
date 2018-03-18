#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int L = 255;
typedef unsigned char byte;
byte h[54];
byte pixel;
ofstream out[8];
ifstream in;

void main()
{
	clrscr();
	char ipfile[]  = "C:\\TurboC++\\Disk\\TurboC3\\BIN\\Ameya\\hero.bmp";
	char op1file[] = "C:\\TurboC++\\Disk\\TurboC3\BIN\\Ameya\\bitplane1.bmp";
	char op2file[] = "C:\\TurboC++\\Disk\\TurboC3\BIN\\Ameya\\bitplane2.bmp";
	char op3file[] = "C:\\TurboC++\\Disk\\TurboC3\BIN\\Ameya\\bitplane3.bmp";
	char op4file[] = "C:\\TurboC++\\Disk\\TurboC3\BIN\\Ameya\\bitplane4.bmp";
	char op5file[] = "C:\\TurboC++\\Disk\\TurboC3\BIN\\Ameya\\bitplane5.bmp";
	char op6file[] = "C:\\TurboC++\\Disk\\TurboC3\BIN\\Ameya\\bitplane6.bmp";
	char op7file[] = "C:\\TurboC++\\Disk\\TurboC3\BIN\\Ameya\\bitplane7.bmp";
	char op8file[] = "C:\\TurboC++\\Disk\\TurboC3\BIN\\Ameya\\bitplane8.bmp";

	in.open(ipfile,ios::in|ios::binary);
	out[0].open(op1file,ios::out|ios::binary);
	out[1].open(op2file,ios::out|ios::binary);
	out[2].open(op3file,ios::out|ios::binary);
	out[3].open(op4file,ios::out|ios::binary);
	out[4].open(op5file,ios::out|ios::binary);
	out[5].open(op6file,ios::out|ios::binary);
	out[6].open(op7file,ios::out|ios::binary);
	out[7].open(op8file,ios::out|ios::binary);
	
	byte bit = 0;
	
	in.read((byte *)(&h),sizeof(h));
	
	for(int i=0; i<8; i++)
	{
		out[i].write((byte *)(&h),sizeof(h));
	}
	
	int count = 7;
	while(!in.eof())
	{
		count=7;
		in.read((byte *)(&pixel),sizeof(pixel));
		while(count>0)
		{
			if(pixel%2==0)
			{
				bit = 0;
			}
			else
			{
				bit = 1;
			}
			out[count].write((byte *)(&bit),sizeof(byte));
			count--;
			pixel = pixel/2;
		}
		
	}	
	
  in.close();
  out[0].close();
  out[1].close();
  out[2].close();
  out[3].close();
  out[4].close();
  out[5].close();
  out[6].close();
  out[7].close();
  cout<<"Output is stored in: "<<op1file;
  getch();

}
