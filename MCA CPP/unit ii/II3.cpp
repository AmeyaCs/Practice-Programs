//Stack using array		12 Aug 2015

#include<iostream>

using namespace std;


int main()
{
	int stackArr[5], top=-1,size, val, sw, b=0;
		
     do
	{
	
	cout<<"\n1. Push()\n2. Pop()\n3. display()\n4. Exit"<<endl;
	cin>>sw;
	switch (sw)
	{
		case 1:
			
			cout<<"\nEnter element : ";
			cin>>b;
			if (top==4)
				cout<<"\n stack is full";
			else
				{
				stackArr[++top]=b;
				cout<<"\nElement "<<b<<" inseted at "<<top<<endl;
				}
			break;
		case 2:
			if(top== -1)
				cout<<"\n stack is empty";
			else
				{
					cout<<stackArr[top]<<" is popped\n";
					top--;
				}
			break;
			
		case 3:
			if (top== -1)
				cout<<"\n stack is empty";
			else
			
			{
				for (int i=top;i>0;i--)
				{		
				cout<<stackArr[i]<<"\n";
				}
			}
			break;
		case 4: cout<<"thank u";
			break;
		default: cout<<"invalid number";
			break;
	}
       }while (sw!=4);


return 0;
}


	
