#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a=8 , d;
    float b=2.2;
    cout<<a+b<<endl; // Implicit typecasting from int to float
    d=b;
    cout<<d<<endl; //Implicit conversion from float to int.

      return 0;
}