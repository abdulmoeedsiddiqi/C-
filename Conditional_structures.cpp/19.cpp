#include<iostream>
using namespace std;
int main()
{
    int a,b,c , max;
    cout<<"Enter three numbers: "; cin>>a>>b>>c;
    if(a>b && a>c){
      max=a;
    }
    else if(b>c && b>a){
max=b;
    }
    else{
        max=c;
        }
        cout<<"The largest number of "<<a<<", "<<b<<" and "<<c<<" is "<<max;
    return 0;
}