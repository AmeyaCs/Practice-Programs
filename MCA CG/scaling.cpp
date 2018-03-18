#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
//using namespace std;

void draw(int sides, float x[20], float y[20]){
	int i;
	for(i = 0; i < sides; i++){
		if(i != (sides - 1)){
			line(x[i], y[i], x[i+1], y[i+1]);
		}else{
			line(x[i], y[i], x[0], y[0]);
		}
	}
}

int main(){

	int sides, i;
	float x[20], y[20], tx, ty;

	cout<<endl<<"Enter number of vertices: ";
	cin>>sides;

	cout<<endl<<"Co-ordinates: ";
	for(i = 0; i < sides; i++){
		cout<<endl<<"(x"<<i<<", y"<<i<<") : ";
		cin>>x[i]>>y[i];
	}

	cout<<endl<<"Scaling factors: ";
	cin>>tx>>ty;

	int gd=DETECT , gm;
	//initgraph(&gd,&gm,"D:/TC/BGI");
	initgraph(&gd,&gm,"C:/TC/BGI");
	//int gdriver = DETECT, gmode;
	//initgraph(&gdriver, &gmode, NULL);

	draw(sides, x, y);//OG

	for(i = 0; i < sides; i++){
		x[i] *= tx;
		y[i] *= ty;
	}

	setcolor(GREEN);
	draw(sides, x, y);//TRANSFORMED
		getch();
	closegraph();


	return 0;
}
