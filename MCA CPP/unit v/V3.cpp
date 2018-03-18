#include<iostream>

using namespace std;

void addarrays(float*,float*,float*,int);

int main()
{
	int i,s;
	cout<<"enter size of arrays:";
	cin>>s;


	float a[s],b[s],c[s];

	cout<<"enter elemenst of array 'a':\n";
	
	for(i=0;i<s;i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}

	cout<<"\nenter elemenst of array 'b':\n";
	
	for(i=0;i<s;i++)
	{
		cout<<"b["<<i<<"] = ";
		cin>>b[i];
	}

	addarrays(a,b,c,s);

	cout<<"\nc = a + b =\n";
	
	for(i=0;i<s;i++)
	{
		cout<<"c["<<i<<"] = "<<c[i]<<endl;
	}	
	cout<<endl;
}


void addarrays(float *x, float *y, float *z, int s)
{

	for(int i=0;i<s;i++)
		z[i]=x[i]+y[i];
}

