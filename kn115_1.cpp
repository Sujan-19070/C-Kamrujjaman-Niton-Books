#include<bits/stdc++.h>
using namespace std;
class classA{
    int a,b,c;
    public:
        classA(int x,int y,int z)             //constructor with three parameters
        {
            a=x;
            b=y;
            c=z;
        }

        void add_All(void)
        {
            cout<<"A+B+C : "<<a+b+c;
        }

};

int main()
{
    classA ob[3]={classA(1,2,3),classA(2,3,4),classA(3,4,5)};

    // cout<<"This is it : "<<ob[0].add_All()<<endl;

    cout<<"All sum are : "<<endl;
    for(int i=0;i<3;i++)
    {

        ob[i].add_All();
    }
    // ob[0].add_All();

    // ob[1].add_All();
}