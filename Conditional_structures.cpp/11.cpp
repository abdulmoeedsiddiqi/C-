#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter two numbers: "; cin>>n1>>n2;
    if(n2%n1==0){
        cout<<n2<<" is multiple of "<<n1;
    }
    else{
        cout<<n2<<" is not multiple of "<<n1;
    }
    return 0;
}