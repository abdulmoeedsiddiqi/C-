#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c,d,e,n;
    cout<<"Enter a five digit number: "; cin>>n;
    a=n/10000;
    n=n%10000;
    b=n/1000;
    n=n%1000;
    c=n/100;
    n=n%100;
    d=n/10;
    e=n%10;
    cout<<e<<d<<c<<b<<a;
    return 0;
}