#include<iostream>
using namespace std;
void sum(int a,int b){
    int _sum;
    _sum=a+b;
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<_sum;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers.\n";
    cin>>a>>b;
    sum(a,b);

    return 0;
}