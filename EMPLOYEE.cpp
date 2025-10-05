#include<iostream>
#include<conio.h>
#include<dos.h>
using namespace std;

class Employee{

    private:
            char* emp_name;
            int emp_join_year;
            float emp_salary;

    public:
            Employee(char* _name,int _year,float _salary);

    private:
            int WorkedYear(void);
            void printinfo(void);       
};

Employee::Employee(char*_name,int _year,float _salary){

    emp_name = _name;
    emp_join_year = _year;
    emp_salary = _salary;
    printinfo();
}

int Employee::WorkedYear(void){
    struct date current_date;
    int YearDifference;
    getdate(&current_date);
    YearDifference = current_date.da_year-emp_join_year;
    return(YearDifference);
}

void Employee::printinfo(void){
    cout<<"Name      :"<<emp_name<<'\n';
    cout<<"Join Date :"<<emp_join_year<<'\n';
    cout<<"Salary    :"<<emp_salary<<'\n';
    cout<<"Worded    :"<<WorkedYear()<<"years\n\n";

}

int main(void)
{
    //clrscr();
    Employee RAM("RAM",1997,12500);
    Employee SAM("Sam",1986,7500);
    Employee JADU("Jadu",1981,8700);
    Employee MADHU("Madhu",1974,27500);
}