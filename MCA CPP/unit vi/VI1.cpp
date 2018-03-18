#include<iostream>

using namespace std;


class base
{

public:

virtual void display()
{
cout<<" this is the base class....lol ";
}
};

class derived1 :public base
{


void display()
{
cout<<"this is the derived class1 ....hehehehe lolwa"<<endl<<endl;
}

};

class derived2: public base
{

void display()
{
cout<<"this is the derived class 2 .......lolwa twice :D"<<endl<<endl;
}
};

int main()
{

base *b;
base b1;
b = &b1;
b->display();

derived1 d1;
derived2 d2;

b=&d1;
b->display();

b=&d2;
b->display();

cout<<"End of program lolwa :D"<<endl<<endl;
return 0;
}
