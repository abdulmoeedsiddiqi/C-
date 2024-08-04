#include<iostream>
using namespace std;
int main()
{
    int n,fac=1;
    cout<<"Enter a number: ";
    cin>>n;
    int i=1;
    while(i<=n){
     fac=fac*i;
     i++;
    }
    cout<<"The factorial of "<<n<<" is "<<fac;
    return 0;
}