#include<iostream>

using namespace std;

void maxint(int a[],int b);

int main()
{
	int a[10],b;
	
	cout<<"no of element: "<<endl;
	cin>>b;
	
	cout<<"enter elements of array: "<<endl;
	for(int i=0;i<b;i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
		
	}

	cout<<endl;

	maxint(a,b);
}

void maxint(int a[10],int b)
{
	int max=0,in=0;
	for(int i=0;i<b;i++)
	{
		if(a[i]>max)
		{
	        max=a[i];
		in=i;
		}
	
	}

	cout<<"largest no.: "<<max<<endl<<"index : "<<in<<endl;
}
