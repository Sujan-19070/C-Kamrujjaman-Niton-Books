#include<iostream>
using namespace std;
int main(){
    int val = 10;
    int *ptr = &val;
    //*ptr that means ptr pointer er value ta print koro . * sign diye oi location er value print korte bola hoyeche
    //ptr thakle ptr pointer er location address print koro .

    cout<<"This is the accessd value : "<<*ptr<<endl;

    cout<<"This is the address of the location : "<<ptr<<endl;
    return 0;

}