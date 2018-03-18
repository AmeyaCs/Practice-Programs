#include<iostream>
#include<cstring>
using namespace std;
class Vehicle
{
public:	
int m_year,chasis_no;
string type;

};
class TwoWheeler:public Vehicle
{
public:
string engine_capacity;
};
class Scooty:public TwoWheeler
{
public:
void get_Data()
{
cout<<"enter type of vehicle"<<endl;
getline(cin,type);
cout<<"enter manufacture year"<<endl;
cin>>m_year;
cout<<"enter chasis no"<<endl;
cin>>chasis_no;
cout<<"enter engine capacity"<<endl;
cin>>engine_capacity;
}
void disp_Data()
{
cout<<"your vehicle is :"<<type<<endl;
cout<<"manufacture year :"<<m_year<<endl;
cout<<"chaisi no :"<<chasis_no<<endl;
cout<<"engine capacity :"<<engine_capacity<<endl;
}
};
int main()
{
Scooty s;
s.get_Data();
s.disp_Data();
}
