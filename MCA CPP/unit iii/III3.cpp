#include<iostream>
#include<string>

using namespace std;

class emp
{
	
	public  :
			string name,dept,mgr;
			double salary;
			void getdata()
			{
				cout<<"\nenter the name for employee"<<endl;
				cin>>name;	
				cout<<"enter the deparment for employee"<<endl;
				cin>>dept;
				cout<<"enter the Salary for employee"<<endl;
				cin>>salary;	
				cout<<"enter the mgr name for employee"<<endl;
				cin>>mgr;	
	

			}	
			void showdata()
			{
				
				cout<<name<<"    "<<dept<<"    "<<salary<<"    "<<mgr<<endl<<endl;
			}	
};
int main()
{	
	int j,i,n=10;
	cout<<"********* program for Class Emp *********"<<endl;
	emp e1[n];
	cout<<"enter number of employees"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		e1[i].getdata();

	}
	cout<<"Details of Employee\n"<<endl;
	for(i=0;i<n;i++)
	{
		e1[i].showdata();
	}

	cout<<"************ *************** ***********"<<endl;
	cout<<"\nemployees having same mgr"<<endl;

	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(e1[i].mgr == e1[j].mgr)
		{
			
			cout<<e1[i].name<<"  "<<e1[i].mgr<<endl;
			cout<<e1[j].name<<"  "<<e1[j].mgr<<endl;
			
		}
	}
	}

	cout<<"************ *************** ***********"<<endl;
	cout<<"\nemployees having same dept"<<endl;

	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(e1[i].dept == e1[j].dept)
		{
			
			cout<<e1[i].name<<"  "<<e1[i].dept<<endl;
			cout<<e1[j].name<<"  "<<e1[j].dept<<endl;
			
		}
	}
	}

	return 0;
}
