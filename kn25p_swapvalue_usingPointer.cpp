#include<iostream>
using namespace std;

void swapvalues(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x=5,y=10;

    cout<<"Before swap : "<<endl;
    cout<<"x= "<<x<<","<<"y= "<<y<<endl;
    

}