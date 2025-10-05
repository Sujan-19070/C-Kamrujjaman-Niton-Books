#include<iostream>
using namespace std;
class SimpleAddition{

    public:
       int a,b;
       int Add( )
         {
            return(a+b);
         }
};
int main(void)
{
    SimpleAddition SA;
    SA.a = 10;
    SA.b = 20;
    cout<<"A+B = "<<SA.Add();
}