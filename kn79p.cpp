#include<iostream>
using namespace std;

//forward reference
class A;

//declare class B
class B{
        int PrvB1;
     public:
        B(){PrvB1=0;}
        void GetPrvB1(int x){PrvB1 = x;}
        void ShowPrvB1(A a);   
};

//declare class A
    class A{
          int PrvA1;
        public:
          A(){PrvA1=0;}
          void GetPrvA1(int x){PrvA1=x;}
          friend void B::ShowPrvB1(A a);      //friend declaration here  
    };

void B::ShowPrvB1(A a)
{
    cout<<"\nValue of PrvA1 : "<<a.PrvA1<<"\n";
    cout<<"\nValue of PrvB1 : "<<PrvB1<<"\n";
}    
int main()
{
    A a1;B b1;
    a1.GetPrvA1(30);
    b1.GetPrvB1(50);
    b1.ShowPrvB1(a1);
}