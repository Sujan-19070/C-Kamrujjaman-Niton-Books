#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"How many element : "<<endl;
    cin>>n;
    int *ptr = new int[n];
    for(int i=0;i<n;i++)
        *(ptr+i)=1+i;

    for(int i=0;i<n;i++)
        cout<<(*ptr+i)<<" "<<endl;

    
    return 0;
}