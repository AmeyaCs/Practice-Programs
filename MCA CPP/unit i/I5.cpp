#include <iostream>

using namespace std;

struct student{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct student s[10];
    int i;
    cout<<"Enter information of students:"<<endl;
    for(i=0;i<10;++i)
    {
        s[i].roll=i+1;
        cout<<endl<<"For roll number"<<s[i].roll;
        cout<<"Enter name: ";
        cin>>s[i].name;
        cout<<"Enter marks: ";
        cin>>s[i].marks;
        cout<<endl;
    }
    cout<<"Displaying information of students:"<<endl;
    for(i=0;i<10;++i)
    {
     cout<<"Information for roll number"<<i+1<<endl;
     cout<<"Name: ";
     cout<<s[i].name;
     cout<<"Marks: "<<s[i].marks;
   }
   return 0;
}
