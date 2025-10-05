#include<iostream>
using namespace std;

class classA{
    private:
      int x;

    public:
      int a;
      void print_A(){
        cout<<" A = "<<a<<endl;
      }  
      void print_X(int a){
        x = a;
        cout<<"X = "<<x<<endl;
      }

};

int main()
{
    classA a1;
    a1.a = 5;
    a1.print_A();
    a1.print_X(45);
}