#include<iostream>
using namespace std;

struct A{
    int a1;
    int a2[5];
};

class classA{
    A A1;
    public:
      A A2;
      void print_A(){
        A1.a1= 10;
        A1.a2[0]=11;
        A1.a2[1]=22;
        A1.a2[2]=33;
        A1.a2[3]=44;
        A1.a2[4]=55;

        //printing value of private member
        cout<<"Value of A1 in member function : ";
        cout<<"A1.a1 = "<<A1.a1<<endl;
        cout<<"A1.a2 = ";
        for(int i=0;i<5;i++)
        {
            cout<<A1.a2[i]<<" ";

        }

        //printing value of private member
        cout<<"Value of A2 in member function : ";
        cout<<"A2.a1 = "<<A2.a1;
        cout<<"A2.a1 = ";
        for(int i=0;i<5;i++)
        {
            cout<<A2.a2[i]<<" ";
        }

      }
};
int main(){
    classA a1;
    cout<<"Entering value for A2.A1 : ";
    cin>>a1.A2.a1;
    cout<<"Enter five value for A2.a2[] : ";
    for(int i=0;i<5;i++)
    {
        cin>>a1.A2.a2[i];
    }
    a1.print_A();

}