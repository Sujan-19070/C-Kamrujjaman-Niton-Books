#include<iostream>
#include<conio.h>
#include<dos.h>
using namespace std;

class Employee{

    private:
        char*emp_name;
        int emp_join_year;
        float emp_salary;

    public:
        Employee(char*_name,int _year,float _salary);

    private:
        int WorkedYear(void);
        void Printinfo();        

};
Employee::Employee(char*_name,int _year,float _salary){
    emp_name = _name;
    emp_join_year = _year;
    emp_salary = _salary;

    Printinfo();
}
int Employee::WorkedYear(void){
    struct date current_date;
    int YearDifference;
    getdata(&current_date);
    YearDifference = current_date.da_year-emp_join_year;
    return(YearDifference);
}
void Employee::Printinfo(void){
    cout<<"Name : "<<emp_name<<endl;
    cout<<"Join Date :"<<emp_join_year<<endl;
    cout<<"Salary : "<<emp_salary<<endl;
    cout<<"Worked :"<<WorkedYear()<<endl;
}

int main()
{
    clrscr();
    Employee SAM("SAm",1983,12347);
}