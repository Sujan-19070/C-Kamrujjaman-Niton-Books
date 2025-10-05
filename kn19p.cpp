#include<iostream>
using namespace std;
int x;
void changeX()
{
    x=20;
}
int main()
{
    int x;
    x = 10;
    changeX();
    cout<<"value of x is : "<<x;
  
}