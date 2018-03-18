#include <iostream>
using namespace std;

int  main()
{

int arr[10];	
int i,j,tmp,n=10;

   
	for(i=0;i<n;i++)
	{
	cout<<"Enter the element for "<<i<<" th location "<<endl;

	cin>>*(arr+i);	
	}


cout<<"Elements in the array are:"<<endl;	

	for(i=0;i<n;i++)
	{
	cout<<*(arr+i)<<endl;
	}



for(i=0;i<n;i++)
   {
    
for(j=i+1;j<n;j++)

{
       if( *(arr+i) > *(arr+j))
{
      tmp = *(arr+i);
      *(arr+i) = *(arr+j);
      *(arr+j) = tmp;
       }
    }
}

cout<<"Elements in the array are:"<<endl;	

	for(i=0;i<n;i++)
	{
	cout<<*(arr+i)<<endl;
	}

return 0;

}
