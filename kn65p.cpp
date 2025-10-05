#include<iostream>
using namespace std;

//............creating sample class.........
class Sample{
    public:
        Sample()
        {cout<<"Message from constructor"<<endl;}

        ~Sample()
        {cout<<"Message from destructor"<<endl;}

};

//..........defining test function..........
void FuncA(){
    cout<<"Creating sample object in FuncA()"<<endl;
    Sample smp;   //Constructor is calling here
                  //Destructor is calling at this point
}

//............main() function.............

int main()
{
    cout<<"Creating sample object in main()"<<endl;
    Sample smp;      //constructor is calling here
    cout<<"calling FuncA()"<<endl;
    FuncA();        //calling FuncA()
    cout<<"FuncA() called .";
    //destructor is calling at this point
}