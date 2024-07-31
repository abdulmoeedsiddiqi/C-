#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first variable: "; cin>>a;
    cout<<"Enter Second variable: "; cin>>b;
    cout<<"Enter third variable: "; cin>>c;
    cout<<"Before swapping the values are:\n"<<a<<" "<<b<<" "<<c<<endl;
    int temp ;
    temp=a;
    a=b;
    b=c;
    =temp;
    cout<<"After swapping the values are:\n"<<a<<" "<<b<<" "<<c<<endl;
    
    return 0;
}