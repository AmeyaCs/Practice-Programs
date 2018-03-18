#include<iostream>
#include<string>

using namespace std;


int main()
{
	string c,a,b;

	cout<<"********** program for string ***************"<<endl;
	
	cout<<"enter string : "<<endl;
	cin>>a;
	cout<<"enter string : "<<endl;
	cin>>b;
	
	cout<<endl<<"after appending first string to second string"<<endl;
	
	cout<<a.append(b)<<"\n"<<endl;

	cout<<"after swaping first string with second string"<<endl;
	swap(a,b);
	cout<<a<<" "<<b<<endl<<endl;

	cout<<"after erasing string"<<endl;
	a.erase(4,a.length());
	cout<<a<<"\n"<<endl;

	cout<<"enter the string which you want to find"<<endl;
	cin>>c;
	size_t found;
	found=a.find(c);
	if (found!=a.npos)
        cout <<c<< " found at: " << found << '\n';

 	a.replace(5,3," vishal");
 	cout << a << '\n';

	return 0;
}
