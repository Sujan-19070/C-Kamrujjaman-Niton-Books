#include<bits/stdc++.h>
using namespace std;
class classA{
    int a,b;
    public:
        classA(int x,int y)
        {
            a=x;
            b=y;
        }
        void add_AB(int p,int q)
        {
            cout<<"\nob["<<p<<"]["<<q<<"]:a+b="<<a+b;
        }
};
int main(void){

    classA ob[2][3]={classA(1,2),classA(2,3),classA(3,4),classA(4,5),classA(5,6),classA(6,7)};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            ob[i][j].add_AB(i,j);
        }
    }

}