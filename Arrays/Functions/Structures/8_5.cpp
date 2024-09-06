#include<iostream>
using namespace std;
struct Phone{
    int nCode;
    int aCode;
    int number;
};
in(Phone & p){
    cout<<"Enter N-code, A-code, amd number: ";
    cin>>p.nCode>>p.aCode>>p.number;
}
out(const Phone & p){
    cout<<p.nCode<<p.aCode<<p.number<<endl;
}
int main()
{
    Phone p1,p2;
    p1={0, 992 , 4468863};
    in(p2);
    out(p1);
    out(p2);
    return 0;
}