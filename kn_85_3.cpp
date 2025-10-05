#include<iostream>
using namespace std;
class classA{
    public:
       int a,b;
       void add_AB()
       {
        cout<<" a + b = "<<a+b<<endl;
       }
};
classA a1;
void f1()
{
    cout<<"This is from f() : "<<endl;
    a1.a=10;
    a1.b=20;
    a1.add_AB();
}
int main()
{
    cout<<"This is from main function : "<<endl;
    a1.a=20;
    a1.b=30;
    a1.add_AB();
    f1();
}