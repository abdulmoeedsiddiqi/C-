#include<iostream>
#include<string.h>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    double s,area,_area;
    cout<<"Enter the length of the sides of triangle: "; cin>>a>>b>>c;
    s= (a+b+c)/3;
    _area=s* (s-a)*(s-b)*(s-c);
    area=sqrt(_area);
    cout<<"The area of triangle is "<<area;
    return 0;
}