#include<iostream>
using namespace std;
void cal(int *a,int *b)
{
    int *temp,i;
    temp=&i;
    *temp=*a;
    *a=*b;
    *b=*temp;
}

main()
{
    
    int i=5,j=10;
    cout<<"Before swapping I = "<<i<<" J = "<<j<<endl;
    cal(&i,&j);
    cout<<"After swapping I = "<<i<<" J = "<<j<<endl;
}
