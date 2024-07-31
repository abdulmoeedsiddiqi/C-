 #include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    double s , v ,t;
    cout<<"Enter the speed of the car in km/h"<<endl;
    cin>>v;
    cout<<"Enter distance in km ";
    cin>>s;
    t=s/v;
    cout<<"Time to reach the destination is "<<t<<" seconds ";
    return 0;
}