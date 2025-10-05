#include<bits/stdc++.h>
using namespace std;
class Person{
    char name[25];
    public: 
        Person(char *n)
        {
            strcpy(name,n);
        }
        void PrintName(void)
        {
            cout<<"\nName is : "<<name<<'\n';
        }
};

int main(){
    Person ob[5]={"Nabib","Ahamed","Sujan","Misti","Baby"};
    for(int i=0;i<5;i++)
    {
        ob[i].PrintName();
    }
}