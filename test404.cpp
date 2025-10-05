#include<iostream>
using namespace std;

class Test{
    int a,b;
    public:
        void SetAB(int x,int y)
        {a=x;b=y;}

        int GetAtimesB()
        {return a*b;}
};
//function AtimesBtimes10()
int AtimesBtimes10(Test tst){
    tst.SetAB(10,10);
    return(tst.GetAtimesB()*10);
}
int main()
{
    Test tst;
    tst.SetAB(15,15);
    cout<<"\nA*B*10 : "<<AtimesBtimes10(tst);
    cout<<"\nA*B    : "<<tst.GetAtimesB();
}