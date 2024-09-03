#include<iostream>
using namespace std;
int n;
int func(int n){
return 2*n;
}
int main()
{
    cout<<"Enter a number: ";
     cin>>n;
    cout<<func(n);
    return 0;
}