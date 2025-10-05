#include<iostream>
using namespace std;
void ChangeValue(int *val ) //call by reference
{
    *val =15;
}
int main()
{
    int i = 10;
    cout<<"Before calling ChangeValue(): i = "<<i<<endl;

    ChangeValue(&i); //calling function with address argument

    cout<<"After calling ChangeValue(): i = "<<i<<endl;

    cout<<" sere : "<<i<<endl;
    

}