#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter Salesperson Status(s/j or S/J): ";
    cin>>ch;
    if(ch=='S' || ch=='s'){
        cout<<"Salary: 400\\-";
    }
    else if(ch=='J' || ch=='j'){
        cout<<"Salary: 275\\-";
    }
    return 0;
}