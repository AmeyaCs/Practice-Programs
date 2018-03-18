#include<iostream>

using namespace std;

int main()
{
	char c;

	do
	{
		cout<<"enter character: "<<endl;
		cin>>c;
		
		cout<<"ascii value of '"<<c<<"' is "<<(int) c<<endl; 

	}while(c!='B');

}


