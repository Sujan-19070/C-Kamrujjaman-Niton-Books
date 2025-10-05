#include<iostream>
using namespace std;

class sample{
    public:
      //member function FuncA()
      void FuncA()
         {cout<<"This is ,,,funcA()"<<endl;}
      
      //member function FuncB()
      void FuncB()
         {
            cout<<"This is FuncB()"<<endl;
            FuncA();
          }  
};

int main()
{
    sample samp1;
    samp1.FuncA();
    samp1.FuncB();
}