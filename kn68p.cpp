#include<iostream>
using namespace std;

class Sample{
    private:
        int x,y; 
        void add()
          { 
            cout<<"x+y="<<x+y<<endl;
          }
        
    
    public:
        Sample(int a,int b)
         {
            x=a;
            y=b;

            add();

         }  
};

int main(){
    Sample smp(100,200);


    return 0;
}
