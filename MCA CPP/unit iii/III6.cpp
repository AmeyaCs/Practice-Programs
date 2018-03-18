#include<iostream>
#include<string.h>
using namespace std;
class emp
{
    public:
        int emp_id;
        string emp_name;
    public:
        static int emp_total;
        static void show_total();
        void show_emps()
        {
            cout<<"emp id: "<<emp_id<<" emp name "<<emp_name<<endl;
            cout<<"TOTAL: "<<emp_total;
        }
        void setdata()
        {
            cout<<"enter emp name"<<endl;
            cin>>emp_name;
            show_total();
           
            emp_id=emp_total;
        }
};

int emp::emp_total=0;
void emp::show_total()
{
            emp_total++;
}

int main()
{
        emp obj,obj1;
        obj.setdata();
        obj1.setdata();
        obj.show_emps();
        obj1.show_emps();

        return 0;
}
