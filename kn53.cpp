#include<iostream>
using namespace std;
class ADD{
    int x,y;
    public:
     ADD(int a,int b)// this is constructor
     {
        x=a;
        y=b;
     }
     void Add_xy()
     {
        cout<<"x+y = "<<x+y<<endl;
     }
};
int main(){
    ADD x(10,20);
    x.Add_xy();

}