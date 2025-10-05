#include<iostream>
using namespace std;
void func(int x,float y=3.1416)
{
    cout<<"Value of x and y are : "<<x<<","<<y<<endl;
}
int main()
{
    func(10);
    func(20,23.64);
    return 0;

}