#include<iostream>

using namespace std;

class Year
{
public:
   
int y;

	void setdata()
	{
		cout<<"enter year"<<endl;
		cin>>y;
	}
			void dispdata()
			{
				cout<<"year"<<y<<endl;
			}


	int leap()
	{

		if(y%4==0)
		{
			cout<<"it is a leap year"<<endl;
		}
		else
		{
			cout<<"not a leap year"<<endl;

		}
	return 0;
	}

};


int main()
{
	
Year y1;
y1.setdata();
y1.dispdata();
y1.leap();




}
