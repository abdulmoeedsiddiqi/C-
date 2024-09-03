#include<iostream>
using namespace std;
void arithmeticOperation(int a,char op, int b){
    switch(op){
        case '+':
        cout<<a<<"+"<<b<<"="<<a+b;
        break;

                case '-':
        cout<<a<<"-"<<b<<"="<<a-b;
        break;

                case '*':
        cout<<a<<"*"<<b<<"="<<a*b;
        break;

                case '/':
        cout<<a<<"/"<<b<<"="<<a/b;
        break;

    }
}
int main()
{
    int a,b;
    char op;
    cout<<"Enter number, operator and second number: "; cin>>a>>op>>b;
    arithmeticOperation(a,op,b);
    return 0;
}