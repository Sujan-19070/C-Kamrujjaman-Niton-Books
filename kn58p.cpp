#include<iostream>
using namespace std;
class A{
    public:
        void FuncA1(){
            cout<<"this is FuncA1() from class A"<<endl;
        }
        void FuncA2(){
            cout<<"this is FuncA2() from class A"<<endl;
        }
};
//declaring class B
class B{
    A a1;
    public:
        void FuncB1(){
            cout<<"this is FuncB1() from class B"<<endl;
            a1.FuncA1();
        }
};
int main(){
    B b1;
    b1.FuncB1();
}