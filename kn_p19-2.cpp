#include<iostream>
using namespace std;
int x;  //global variable x
void changex()
{
    x=20;
}
int main()
{
    int x;
    x=10;
    changex();
    cout<<"value of x is : "<<::x;
}