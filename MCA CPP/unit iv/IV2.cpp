#include<iostream>
#include<string>
using namespace std;
class person
{
public:
string name;
string birthday;
void getdata()
{
cout<<"enter name"<<endl;
cin>>name;
cout<<"enter birthdate in format dd/mm/yy"<<endl;
cin>>birthday;
}
void printdata()
{
cout<<"Name: "<<name<<endl;
cout<<"birthday :"<<birthday<<endl;
}
};
class student:public person
{
public:
string roll_no;
string major_subject;
string minor_subject;
void getdata()
{
person::getdata();
cout<<"enter roll no"<<endl;
cin>>roll_no;
cout<<"enter major subject"<<endl;
cin>>major_subject;
cout<<"enter minor subject"<<endl;
cin>>minor_subject;
}
void printdata()
{
person::printdata();
cout<<"roll no: "<<roll_no<<"\nmajor subject: "<<major_subject<<"\n minor subject: "<<minor_subject<<endl;
}
};
class instructor:public person
{
public:
string salary;
string subject;
void getdata()
{
person::getdata();
cout<<"enter salary"<<endl;
cin>>salary;
cout<<"enter teaching subject"<<endl;
cin>>subject;
}
void printdata()
{
person::printdata();
cout<<"salary: "<<salary<<"\nteaching subject: "<<subject<<endl;
}
};
int main()
{
int i;
cout<<"enter data: press 1 for student data and 2 for instructor data"<<endl;
cin>>i;
if(i==1)
{
student s;
s.getdata();
s.printdata();
}
else if(i==2)
{
instructor o;
o.getdata();
o.printdata();
}
return 0;
}
