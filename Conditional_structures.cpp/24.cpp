#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: "; cin>>a>>b>>c;

    if((a!=b)&&(b!=c)&&(a!=c)){
        cout<<a<<b<<c<<"\t";
        cout<<a<<c<<b<<"\t";
       cout<<b<<a<<c<<"\t";
       cout<<b<<c<<a <<"\t";
       cout<<c<<a<<b<<"\t";
       cout<<c<<b<<a<<"\t";       
    }
    if(a==b==c){
        cout<<a<<b<<c;
    }

if(a==b){
    cout<<a<<b<<c<<"\t";
    cout<<a<<c<<b<<"\t";
    cout<<c<<a<<b<<"\t";
  }
  else if(a==c){
    cout<<a<<c<<b<<"\t";
    cout<<a<<b<<c<<"\t";
    cout<<b<<a<<c<<"\t";
    }
    else {
    cout<<a<<c<<b<<"\t";
    cout<<b<<a<<c<<"\t";
    cout<<b<<c<<a<<"\t";
    }
    return 0;
}