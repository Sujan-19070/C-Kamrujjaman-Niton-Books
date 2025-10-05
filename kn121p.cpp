#include<bits/stdc++.h>
using namespace std;
 
class AddAB{
    int a,b;
    public:
        AddAB(int x,int y)
        {
            a=x;
            b=y;
        }
        void Add_AB(int p)
        {
            cout<<"\nobj["<<p<<"] : a + b = "<<a+b;
        }
};

int main()
{
    AddAB Obj[3]={AddAB(3,3),AddAB(4,4),AddAB(5,5)};
    AddAB *ptr;

    ptr=Obj;         //ptr holds the address of the object

    for(int i=0;i<3;i++){
        ptr->Add_AB(i);
        ptr++;
    }
    
}