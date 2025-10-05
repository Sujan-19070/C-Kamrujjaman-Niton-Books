#include<iostream>
#include<string.h>
using namespace std;

class Person{
    char name[25];

    public:
        Person()
            {cout<<"\nCreating...";}     //constructor
        void PrintName(void)
            {cout<<"\nName : "<<name<<"\n";}
        void GetName(char *n)
            {strcpy(name,n);}
        ~Person()
            {cout<<"\nDestructing...";}         //destructor

};
int main(void)
{
    Person ob[5];
    ob[0].GetName("Nabib");
    ob[1].GetName("Ahamed");
    ob[2].GetName("Sujan");
    ob[3].GetName("Nilima");
    ob[4].GetName("Ahamed");

    for(int i=0;i<5;i++)
        {
            ob[i].PrintName();
        }

}