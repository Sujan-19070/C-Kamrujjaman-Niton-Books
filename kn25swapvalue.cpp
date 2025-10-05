#include<iostream>
using namespace std;
void SwapValue(int &x,int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int p;
    int q;
    p=7,q=10;
    SwapValue(p,q);
    cout<<"p = "<<p<<endl<<"q = "<<q;

    return 0;
}