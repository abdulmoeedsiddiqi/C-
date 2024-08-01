#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter Salesperson Status(s/j or S/J): ";
    cin>>ch;
    if(ch=='S' || ch=='s'){
        cout<<"Salary: 400\\_";
    }
    return 0;
}