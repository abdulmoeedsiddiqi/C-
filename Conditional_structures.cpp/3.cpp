#include<iostream>
using namespace std;
int main()
{
    int n1 , n2 ;
    cout<<"Enter two numbers: "; cin>>n1>>n2;
    if(n2 == n1*n1){
        cout<<n2<<" is square of "<<n1;
    }
    else if(n1=n2*n2){
        cout<<n1<<" is square of "<<n2;
    }
    else{
        cout<<"No number is square of other. ";
    }
    return 0;
}