#include<iostream>
using namespace std;
class Add{
    int x,y;
    public:
        void Add_xy();
        
};
void Add::Add_xy(){
    x=y=5;
    cout<<"x+y= "<<x+y<<endl;

}
int main(){
    Add obj1;
    obj1.Add_xy();
    return 0;
}