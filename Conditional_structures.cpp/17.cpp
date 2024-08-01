#include<iostream>
using namespace std;
int main()
{
    int a,b,c , min;
    cout<<"Enter three numbers: "; cin>>a>>b>>c;
    if(a<b){
        if(a<c){
            min=a;
        }
        else{
            min=c;
        }
    } 
    else{
        if(b<c){
            min=b;
        }
        else{
            min=c;
        }
    }
    cout<<"The minimum number among "<<a<<", "<<b<<" and "<<c<<" is "<<min<<endl; 
    return 0;
}