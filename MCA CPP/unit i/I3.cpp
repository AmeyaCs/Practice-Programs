#include<iostream>
#include<stdlib.h>
using namespace std;
char grade(double x)
{
char y;
if(x>=1 && x<2)
{
    y='D';
    return y;
}
else if(x>=2 && x<2.5)
{
    y='c';
    return y;
}
else if(x>=2.5 && x<3)
{
    y='B';
return y;
}
 else if(x>=3 && x<4)
{
 y='A';
return y;
 
}
 else if(x>=4 && x<5)
{
  y='E';
return y;
}
}
int main()
{
 double avg;
char g;
cout<<"enter average points between 1 to 5:"<<endl;
cin>>avg;
if(avg<5)
{
 g=grade(avg);
cout<<" the grade for "<<avg<<" is "<<g<<endl;
}
else
{
 cout<<"enter average points betwwen 1 to 5 "<<endl;
}
return 0;
}

