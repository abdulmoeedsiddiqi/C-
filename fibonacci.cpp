#include<iostream>
using namespace std;
int main()
{
    int n1,n2,temp=0 , n;
    n1=0 , n2=1;
    cout<<n1<<" "<<n2<<" ";

    while(n2 < 1000){
        temp=n2;
        n2=n1+n2;
        n1=temp;
        if(n2<1000){

        cout<<n2 <<" ";
        }
       
        // temp=n1+n2;
        // n1=temp;
        // cout<<temp<<" ";

        // temp=n1;
        // n1=n2;
        // n2=n1+n2;
        // cout<<n1<<" "<<n2<<" ";
    }
    return 0;
}