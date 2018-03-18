#include<graphics.h> 
int main()
{
   int gd = DETECT,gm,x,y;
   initgraph(&gd,&gm,NULL);
 
   setbkcolor(BLUE);
   x=getmaxx();
   y=getmaxy();
   
   setcolor(YELLOW);
   line(0,(y/2),x,(y/2));
   setcolor(YELLOW);
   line((x/2),0,(x/2),y);
   setcolor(RED);
   circle((x/2),(y/2),40);
   
   outtextxy((x/2),(y/2),"(0,0)");
   
   outtextxy((x*3/4),(y*1/4),"Ist");
   
   outtextxy((x*1/4),(y*1/4),"IInd");
   
   outtextxy((x*1/4),(y*3/4),"IIIrd");

   outtextxy((x*3/4),(y*3/4),"IVth");
   
   line((x/2),(Y/2),x,y);
   
   line((x/2),(Y/2),0,0);
   
   line((x/2),(Y/2),x,0);
   
   line((x/2),(Y/2),y,0);
   
   delay(5000);
   
   closegraph();
   return 0;
}
