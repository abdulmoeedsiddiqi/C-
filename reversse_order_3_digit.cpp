#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    int n1 , n2, n3;
    cout<<"Enter a three digit number: "; cin>>n ;
    n1=n/100 ;
    n=n%100;
    n2=n/10;
    n3=n%10;
    cout<<n3<<n2<<n1;
    return 0;
}