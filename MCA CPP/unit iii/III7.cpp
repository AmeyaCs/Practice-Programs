#include<iostream>

using namespace std;

class Time
{

  int hrs,min,sec;
  public:
  Time()
   {
      hrs=min=sec=0;
      cout<<"Time set to 00:00:00"<<endl;
   }
  void inputData()
  {
     
     cout<<"Enetr Hours Minutes and Seconds  :"<<endl;
     cin>>hrs>>min>>sec;
  }
  void putData()
  {
    cout<<"Time is"<<hrs<<":"<<min<<":"<<sec<<":"<<endl;
  }
  ~Time()
  {
  }
};
int main()
{
  Time t;
  t.inputData();
  t.putData();
  return 0;
}
