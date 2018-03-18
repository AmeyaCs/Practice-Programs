#include<iostream>
using namespace std;


class Person{

protected:
	string name;
	string bday;	

};

class Student: public Person{

protected:
	int roll_no;
	string major;
	string minor;

public:
	Student() {
		roll_no++;
	}

	void get_data(){
		cout<<"Enter name";
		cin>>name;
		cout<<"Enter bday";
		cin>>bday;
		cout<<"Enter major";
		cin>>major;
		cout<<"Enter minor";
		cin>>minor;
	}

		void display_data(){

		cout<<"The data you entered is:"<<endl;
		cout<<name<<endl;
		cout<<bday<<endl;
		cout<<major<<endl;
		cout<<minor<<endl;
		
	}

	
};

class Instructor: public Person
{
protected:
	int salary;
	string sub_to_teach;

public:
	void get_data(){
		cout<<"Enter name";
		cin>>name;
		cout<<"Enter bday";
		cin>>bday;
		cout<<"Enter salary";
		cin>>salary;
		cout<<"Enter sub_to_teach";
		cin>>sub_to_teach;
	}

	void display_data(){

		cout<<"The data you entered is:"<<endl;
		cout<<name<<endl;
		cout<<bday<<endl;
		cout<<salary<<endl;
		cout<<sub_to_teach<<endl;



	}

	
};


int main(){
int option;
cout<<"Are you a Student or an Instructor? select 1: Student, 2: Instructor"<<endl;
cin>>option;
switch(option){

	case 1:{
		Student stud;
		stud.get_data();
		stud.display_data();
		break;}

	case 2:{
		Instructor inst;
		inst.get_data();
		inst.display_data();
		break;}

	default: cout<<"Wrong option"<<endl;
}




}