#include<iostream>
using namespace std;
int main()
{
    float n1,n2;
    char op;
    cout<<"Enter a floating point , operator(+,-,*,/) and second floating point number: ";
    cin>>n1>>op>>n2;
    switch(op){
        case '+':
        cout<<n1+n2;
        break;

        case '-':
        cout<<n1+n2;
        break;
        case '*':
        cout<<n1*n2;
        break;

        case '/':
        if(n2==0){
            cout<<"Error";
        }
        else{
            cout<<n1/n2;
        }
        break;
        default:
        cout<<"Invalid operator";
    }
    return 0;
}