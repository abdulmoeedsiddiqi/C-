#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter first and last number: ";
    cin>>n1>>n2;
    int i=n1;

    while(i<=n2){
        if(i%2==0){
            cout<<i<<" ";
            }
      i=i+1;
         
    }
    return 0;
}