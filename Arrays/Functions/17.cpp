#include<iostream>
using namespace std;

double fac(int n){
    double prod=1; 
    for(int i=1 ; i<=n ; i++){
        prod*=i;
    }

return prod;
}

int main()
{
    float sum=1.0;
    int n;
    cout<<"Enter the term of the number: ";
    cin>>n;
    
    double term;
    for(int i=1 ; i<=n ; i++){
        term = 1/fac(i);
        sum = sum + term;
    }
    cout<<"Sum is "<<sum;
    return 0;
}