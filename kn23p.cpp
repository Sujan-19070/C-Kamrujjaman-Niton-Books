#include<iostream>
using namespace std;

int main()
{
    //taking two variable of different type
    int i = 10;
    char c = 'A';

    // printing c after converting it from float to int
    cout<<(int)c<<endl;

    //adding a and c 
    int sum = i+c;

    //printing output
    cout<< sum;
}