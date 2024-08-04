#include<iostream>
using namespace std;
int main()
{
   int n,a,b,c,x;
   cout<<"Enter a three digit number: "; cin>>n;
   x=n;
   a=n/100;
   n=n%100;
  b=n/10;
  c=n%10; 
  cout<<"Sum of "<<x<<" is "<<a+b+c;
    return 0;
}