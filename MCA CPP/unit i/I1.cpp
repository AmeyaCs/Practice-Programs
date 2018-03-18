#include<iostream>

using namespace std;

float mul(float,int);

int main()
{	
	float ans,m;
	int n;

	cout<<"enter m,n for m^n"<<endl;
	cin>>m>>n;
	
	ans=mul(m,n);

	cout<<"m^n = "<<ans<<endl;
}


float mul(float a, int b)
{
	
	if(b==1)
		return a;
	return a*mul(a,b-1);
}


