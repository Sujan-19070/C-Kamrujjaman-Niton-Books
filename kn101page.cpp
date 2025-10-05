#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        char S_name[20];
        char S_id[20];
        float S_cgpa;

        void Display()
        {
            cout<<"S_name : "<<S_name<<'\n';
            cout<<"S_id   : "<<S_id<<'\n';
            cout<<"S_cgpa : "<<S_cgpa<<"\n\n";
        }
};

void UseObj(char *name,char *id,float cgpa)
{
    Student A;
    strcpy(A.S_name,name);
    strcpy(A.S_id,id);
    A.S_cgpa=cgpa;

    A.Display();
}

int main()
{

    UseObj("Nabib Ahamed","23511931",3.31);

    return 0;
}