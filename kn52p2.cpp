#include<iostream>
using namespace std;
class GetAvg {
    public:
        char *id;
        float course[5];
        float Avg()
          {
            float avg=0.00;
            for(int i=0;i<5;i++)
            {
                avg += course[i];
               
            }
             return avg/5;
          }
};
int main()
{
    GetAvg Nabib;
    //getdata for id
    cout<<"Enter id : "<<endl;
    cin>>Nabib.id;
    //getdata for course marks
    cout<<"Enter course marks : "<<endl;
    for(int i=0;i<5;i++)
     {
        cin>>Nabib.course[i];
     }
    
    cout<<"Average for "<<Nabib.id<<" is : "<<Nabib.Avg()<<endl; 

}
