#include<iostream>
#include<string.h>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    double height , width;
    cout<<"Enter height and width of trinale: ";
    cin>>height>>width;
    double Area = 0.5 * height * width ;
    cout<<"Area of triangle is: "<<Area;
    return 0;
}