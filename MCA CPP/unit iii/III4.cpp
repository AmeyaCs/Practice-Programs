#include<iostream>  


using namespace std;
class complex  
{  
		int real,imaginary;
	public:  
		void read()  
		{  
			cout<<"\n\nEnter the REAL PART : ";  
			cin>>real;
			cout<<"\n\nEnter the IMAGINARY PART : ";  
			cin>>imaginary;  
		}  
		
		complex operator +(complex c2)  
		{  
			complex c3;  
			c3.real=real+c2.real;  
			c3.imaginary=imaginary+c2.imaginary;  
			return c3;  
		}  

		complex operator -(complex c2)  
		{  
			complex c3;  
			c3.real=real-c2.real;  
			c3.imaginary=imaginary-c2.imaginary;  
			return c3;  
		}  

		void display()  
		{  
			cout<<real<<"+"<<imaginary<<"i";  
		}  
};  

int main()  
{  
	complex c1,c2,c3;  
	int choice,cont;  
	
	do  
	{  

		cout<<"\t\tCOMPLEX NUMBERS\n\n1.ADDITION\n\n2.SUBTRACTION";  
		cout<<"\n\nEnter your choice : ";  
		cin>>choice;  
		
		if(choice==1||choice==2)  
		{  
			cout<<"\n\nEnter the First Complex Number";  
			c1.read();  
			cout<<"\n\nEnter the Second Complex Number";  
			c2.read();  
		}  
		
		switch(choice)  
		{  
			case 1     : c3=c1+c2;  
			           cout<<"\n\nSUM = ";  
			           c3.display();  
			           break;  
			case 2     : c3=c1-c2;  
			           cout<<"\n\nResult = ";  
			           c3.display();  
			           break;  
			default     : cout<<"\n\nUndefined Choice";  
		}  

		cout<<"\n\nDo You Want to Continue?(1-Y,0-N): ";  
		cin>>cont;  

	}while(cont==1);  

}
