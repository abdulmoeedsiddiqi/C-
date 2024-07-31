#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main()
{
    double r=0.123454321;
    cout<<setprecision(9)<<r<<endl;
    cout<<setprecision(8)<<r<<endl;
    cout<<setprecision(7)<<r<<endl;
    cout<<setprecision(6)<<r<<endl;
    cout<<setprecision(5)<<r<<endl;
    cout<<setprecision(4)<<r<<endl;
    cout<<setprecision(3)<<r<<endl;
    cout<<setprecision(1)<<r<<endl;
       return 0;
}