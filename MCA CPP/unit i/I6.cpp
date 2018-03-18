#include<iostream>
#include<stdlib.h>

using namespace std;

int main(int argc, char** argv)
{
	int a=atoi(argv[1]),b=0;

	cout<<"a = "<<a<<endl;

	while(a!= 0)
	{
		b = b * 10;
	        b = b + a%10;
	        a = a/10;
	}	


	cout<<"b = "<<b<<endl;
}
