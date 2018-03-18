#include<iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;
    

public:
    Time(); 
    Time(int,int); 
    void get();
    void show();
friend ostream &operator<<( ostream &, Time &);    //output

};


ostream &operator<<( ostream &out, Time &t) 
{
        out<<"hrs: "<<t.hr<<"\n";
        out<<"min: "<<t.min<<"\n";
        return out;
}
   
int main()
{
    Time t1;
    Time t2;
    cout<<"Enter first time:";
    t1.get();
 cout<<t1;


  // cout<<"Enter second time:";
   // t2.get();
   return 0;
}


Time::Time()
{
    hr=0;
    min=0;
    
}

Time::Time(int h,int m)
{
    hr=h;
    min=m;
    
}

void Time::get()
{
    cout<<"\nEnter hrs:";
    cin>>hr;
    cout<<"Enter min:";
    cin>>min;
    
}

void Time::show()
{
    cout<<"Time is "<<hr<<":"<<min<<endl;
}


