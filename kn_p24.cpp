#include<iostream>
using namespace std;
int ADDXY(int x,int y)
{
    return x+y;
}
float ADDXY(float x,float y)
{
    return x+y;
}
double ADDXY(double x,double y)
{
    return x+y;
}
int main()
{
    cout<<"integer x+y :"<<ADDXY(12,14)<<endl;
    cout<<"float x+y : "<<ADDXY(12.45,52.353)<<endl;
    cout<<"double x+y :"<<ADDXY(23.3255,234.2345)<<endl;

}