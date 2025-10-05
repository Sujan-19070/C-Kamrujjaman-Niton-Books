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
    cout<<"integer x + y = "<<ADDXY(5,5)<<endl;
    cout<<"float   x + y = "<<ADDXY(54.243,85.432)<<endl;
    cout<<"double  x + y = "<<ADDXY(90.234,77.23)<<endl;
    
}