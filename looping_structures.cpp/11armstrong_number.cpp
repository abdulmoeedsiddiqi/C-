#include<iostream>
using namespace std;
int main()
{
    int n,r,x,s=0;
    cout<<"Enter a number: "; 
    cin>>n;
    x=n;
    while(n>0){
        r=n%10;
        n=n/10;
        s=s+(r*r*r);
    }
    if(s==x){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an Armstrong number";
    }
    return 0;
}