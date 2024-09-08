#include<iostream>
using namespace std;
int func(int n1, int n2){
    if(n2<=0){
        return 1;
    }
    if(n2 == 1){
        return n1;
    }

    return n1 * func(n1, n2-1);
}
int main()
{
    int n1,n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    cout<<func(n1,n2);
    return 0;
}