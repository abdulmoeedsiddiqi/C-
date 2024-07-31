#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter first number: "; cin>>a;
    cout<<"Enter Second number: "; cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"The numbers are "<<a<<" "<<b<<endl;

    return 0;
}