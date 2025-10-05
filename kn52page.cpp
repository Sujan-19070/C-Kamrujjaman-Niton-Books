#include<iostream>
using namespace std;
class SimpleAddition{
    public:
     int a,b;
     int Add()
     {
       return (a+b);
     }
};
int main()
{
    SimpleAddition SA;
    SA.a=10;
    SA.b=20;
    
    cout<<"a+b= "<<SA.Add()<<endl;

}