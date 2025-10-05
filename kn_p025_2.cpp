#include<iostream>
using namespace std;
void SweapValue(int x,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"this is from other function :"<<x<<" "<<y<<endl;
}
int main()
{
    int p,q;
    p =10;
    q =20;
    SweapValue(p,q);
    cout<<"p = "<<p<<endl;
    cout<<"q = "<<q<<endl;

    
}