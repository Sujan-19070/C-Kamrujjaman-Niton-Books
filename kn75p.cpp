#include<iostream>
using namespace std;

class A{
       int PrvA1;
    public:
       A()
        {
            PrvA1=0;
        }   
        void GetPrvA1(int x)
        {PrvA1 = x;}

        friend class B;              //declare B as a friend of A


};

class B{
        int PrvB1;
    public:
        B(){PrvB1=0;}               //constructor
        void GetPrvB1(A &a)         //getting reference of object a1
          {
            PrvB1 = a.PrvA1+25;     //using current value of PrvA1
            a.PrvA1 = 50;           //changing value of PrvA1
          }    
          void ShowPrvB1(A a)       //getting copy of a1
          {
          cout<<"\nValue of PrvA1 = "<<a.PrvA1<<"\n";
          cout<<"\nValue of PrvB1 = "<<PrvB1<<"\n";
          }
};

int main(){
    A a1;
    B b1;
    a1.GetPrvA1(30);
    b1.GetPrvB1(a1);
    b1.ShowPrvB1(a1);
}