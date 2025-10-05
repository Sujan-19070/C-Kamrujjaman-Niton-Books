#include<iostream>
using namespace std;

class classA{
    int a;
    int b;
    public:
       
        classA(int x,int y){

            
            a = x;
            b = y;
        }
      
     void add_AB(int x,int y)
     {
        cout<<"A+B = "<<a+b<<endl;
     }
};

classA a1(30,40); 

void f1(void){
    cout<<"f(): {a = 15,b = 15}:";
    /*a1.x = 15;
    a1.y = 15;
    */
    a1.add_AB(15,15);
}
int main(){
    cout<<"in Main() : {a = 5,b=5 }:";
    /*a1.a = 5;
    a1.b =5;
    */
    a1.add_AB(5,5);
    f1();
}