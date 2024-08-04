//Write a program to print the smallest and largest number of enterd five numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    int max,min;
    cout<<"Enter 5 numbers: ";
    cin>>a>>b>>c>>d>>e;
    min=max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    if(d>max) max=d;
    if(e>max) max=e;

    if(b<min) min=b;
    if(c<min) min=c;
    if(d<min) min=d;
    if(e<min) min=e;
    
    cout<<"The smallest and largest number from "<<a<<" "
    <<b<<" "<<c<<" "<<d<<" "<<e<<" is "<<min<<" and "<<max<<" respectively.";
    return 0;
}