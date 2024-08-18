#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: "; cin>>n;
    if(n==0 || n==1){
        cout<<n<<" is a fibonacci number.";
    }
    else{
        int a,b,next;
        a=1 , b=0 , next = a+b ;
        while(next < n){
            a=b;
            b=next;
            next=a+b;
        } 
        if(next==n){
            cout<<n<<" is a fibonacci number. ";
        }
        else{
            cout<<n<<" is not a fibonacci number.";
        }
    }
    return 0;
}