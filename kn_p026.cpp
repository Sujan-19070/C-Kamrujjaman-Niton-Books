#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    //ptr = new int; // allocate memory
    *ptr = 10; //store value to the assigned memory
    cout<<*ptr<<endl;
    delete ptr;
    //cout<<*ptr;
}