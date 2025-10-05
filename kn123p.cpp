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
            cout<<"\nObj["<<p<<"] : a+b = "<<a+b;
        }
};

void Print(AddAB *ptr)
{
    for(int i=0;i<4;i++)
    {
        ptr->Add_AB(i);
        ptr++;
    }
}

int main(){
    AddAB Obj[3]= {AddAB(13,23),AddAB(24,34),AddAB(54,32)};
    Print(Obj);

}