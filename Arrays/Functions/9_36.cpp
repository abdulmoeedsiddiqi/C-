
#include<iostream>
using namespace std;
int fac(int n){
    if(n<=1){
        return 1;
    }
    return n * fac(n-1);
}
int main()
{
    int n;
    cout<<"Enter the nmber of which you want to find the value of factorial(eg 5): ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fac(n)<<endl;
    return 0;
}