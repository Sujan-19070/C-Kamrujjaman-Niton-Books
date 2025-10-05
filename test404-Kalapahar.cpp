#include<bits/stdc++.h>
using namespace std;
class Person{
    char name[25];
    public:
        void GetName(char *n)
        {strcpy(name,n);}

        char *GetName(void)
        {
          return name;  
        }

        void PrintName(void)
        {
            cout<<"\n Name : "<<name;
        }

};

void NameLength(Person Obj)
{
    int len;
    len=strlen(Obj.GetName());
    Obj.PrintName();
    cout<<"\tLength : "<<len;

}

int main(void)
{
    Person Obj[4];
    char getName[25];
    cout<<"\nEnter four name : \n\n";

    for(int i=0;i<4;i++)
    {
        cout<<"\nName["<<i+1<<"]:";
        cin>>getName;
        Obj[i].GetName(getName);

    }

    cout<<"\nLength of four name :\n";
    for(int i=0;i<4;i++)
    {
        NameLength(Obj[i]);
    }


}