#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    float ele_rate , gas_rate , patrol_rate;
    cout<<"Enter current elecricity rate: ";
    cin>>ele_rate;
    cout<<"Enter current gas rate: ";
    cin>>gas_rate;
    cout<<"Enter current patrol rate: ";
    cin>>patrol_rate;
    
    cout<<"The new elecricity rate after 10% increment is "<<ele_rate *0.1 + ele_rate<<endl;
    cout<<"The new  gas rate after 10% increment is "<<gas_rate*0.1 + gas_rate<<endl;
    cout<<"The new patrol rate after 10% increment is "<<patrol_rate *0.1 + patrol_rate<<endl;
    
    return 0;
}