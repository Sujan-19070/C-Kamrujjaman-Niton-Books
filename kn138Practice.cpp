#include<bits/stdc++.h>
using namespace std;
int main()
{
    struct Student{
        char name[25];
        char id[10];
        char dept[10];
        float cgpa;
    };

    Student *ptr;
    ptr = new Student;

    strcpy(ptr->name,"Nabib Ahamed Sujan");
    strcpy(ptr->id,"23511931");
    strcpy(ptr->dept,"CSE");
    ptr->cgpa=3.50f;


    cout<<"Name : "<<ptr->name<<endl;
    cout<<"ID   : "<<ptr->id<<endl;
    cout<<"Dept : "<<ptr->dept<<endl;
    cout<<"CGPA : "<<ptr->cgpa<<endl;

    delete ptr;

    return 0;
}