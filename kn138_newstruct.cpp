#include<bits/stdc++.h>
using namespace std;
int main(void)
{   
    //---------------create custome data type-------------
    struct Student{
        char name[25];
        char id[10];
        char dept[15];
        float cgpa;

    };
    //----------------declare student type pointer variable---------------
    Student *ptr;
    ptr = new Student;

    strcpy(ptr->name,"Nabib Ahamed");
    strcpy(ptr->id,"23511931");
    strcpy(ptr->dept,"CSE");
    ptr->cgpa = float(3.66);

    cout<<"Name : "<<ptr->name<<endl;
    cout<<"ID   : "<<ptr->id<<endl;
    cout<<"Dept : "<<ptr->dept<<endl;
    cout<<"CGPA : "<<ptr->cgpa<<endl;


    //delet ptr


}