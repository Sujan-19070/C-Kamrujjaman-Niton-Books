#include<iostream>
using namespace std;

class classA{
    public:
      int a,b;
      void add_AB(void)
      {
        cout<<"A + B = "<<a+b<<endl;
      }

};
classA a1;
void f1(void)
{
    cout<<"In f1(): {a = 15,b = 15} : "<<endl;
    a1.a = 15;
    a1.b = 15;
    a1.add_AB();
}

int main(void)
{
    cout<<"In main(): {a=5,b=5} : "<<endl;
    a1.a = 5;
    a1.b = 5;
    a1.add_AB();
    f1();
}