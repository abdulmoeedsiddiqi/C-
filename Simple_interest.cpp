#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int pricipal_amount,rate,time,interest;
    cout<<"Enter the principal amount: ";
    cin>>pricipal_amount;
    cout<<"Enter rate of interest: ";
    cin>>rate;
    cout<<"Enter time in years: ";
    cin>>time;
    interest=(pricipal_amount*rate*time)/100;
     cout<<"The simple interest is "<<interest<<endl;
    return 0;
}