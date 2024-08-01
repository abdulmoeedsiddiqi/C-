#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    int max,min;
    cout<<"Enter five numbers: "; cin>>a>>b>>c>>d>>e;
    max=a;
    if(b>a){
        max=b;
    }
    if( c>b){
        max=c;
    }
    if(d>c){
        max=d;
    }
    if(e>d){
        max=e;
    }
min=a;
    if(b < a){
        min=b;
    }
    if( c < b){
        min=c;
    }
    if(d < c){
        min=d;
    }
    if(e < d){
        min=e;
    }

    cout<<"The largest number is "<<max<<" and the smallest number is "<<min<<endl;

    return 0;
}