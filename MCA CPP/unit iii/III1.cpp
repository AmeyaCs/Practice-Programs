#include<iostream>
#include<stdlib.h>
#include<string>


using namespace std;

class friends
{
public:
	string pname;
	string bname;
	int count;
	
	friends()
        {
        count = 0;
	}

	
	void set_data();
	void disp_data();
	void set_counter(friends f[]);
	

};


void friends :: set_data()
{
	cout<<"\n enter name:";
	cin>>pname;
	cout<<"\n enter best friend name:";
	cin>>bname;
}

void friends :: disp_data()
{
	cout<<"name:";
	cout<<pname<<endl;
	cout<<"best friend name:";
	cout<<bname<<endl;
	cout<<"count is "<<count<<endl;
}


void friends::set_counter(friends *b)
{

	for(int i=0;i<4;i++)
	{

		if (pname == b[i].bname)
		{
			count++;
		}
	}

}

int main()
{
	friends f[4];
	for (int i=0;i<4;i++)
	{
		cout<<"for "<<i<<" th data";
		f[i].set_data();
	}

	for (int i=0;i<4;i++)
	{
		f[i].set_counter(f);

	}
	
	for (int i=0;i<4;i++)
		f[i].disp_data();
}
