#include<iostream>
using namespace std;
void function(int x,float y =3.1416)
{
    cout<<"value :"<<x<<","<<y<<endl;

}
int main()
{
    function(10);
    function(10,19.21134);

}