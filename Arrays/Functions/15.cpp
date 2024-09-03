#include<iostream>
using namespace std;
int square(int a){
    return a*a;

}
int cube(int b){
    return b*b*b;
}
int main()
{
    int a,b,s,c;
    cout<<"Enter two numbers: "; cin>>a>>b;
    s=square(a);
    c=cube(b);
    cout<<"Result="<<s+c;
    return 0;
}