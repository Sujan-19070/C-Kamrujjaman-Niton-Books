#include<iostream>
using namespace std;

class classA{
    private:
       int a,b;
    public:
       classA(int x,int y)
       {
         a=x;
         b=y;
       } 
       void add_AB()
       {
        cout<<" A + B : "<<a+b<<endl;

       }  
};

int main()
{
    classA a1(5,10);
    a1.add_AB();
}