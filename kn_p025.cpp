#include<iostream>
using namespace std;
void SwapValue(int &x,int &y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}
int main()
{
    int p,q;
    p = 5;
    q = 7;
    SwapValue(p,q);
    cout<<"P = "<<p<<endl;
    cout<<"Q = "<<q<<endl;


}