#include<iostream>
#include<string>
using namespace std;

struct employee{
    int employeenumber;
    string name;
    float hoursWorked;
    float hourlyRate;
    float grossPay;
};

void in(employee &e){
    cout<<"Enter employee number: "; cin>>e.employeenumber;
    cin.ignore();
    cout<<"Enter name: "; getline(cin,e.name);
    cout<<"Enter hours worked: ";
    cin>>e.hoursWorked;
    //cin.ignore();
    
    cout<<"Enter hourly rate: ";
    // cin.ignore();
     cin>>e.hourlyRate;
    e.grossPay=e.hoursWorked * e.hourlyRate ;
    
}
void out(const employee e){
    cout<<"Employee Number: "<<e.employeenumber<<endl;

    cout<<"Employee Name: "<<e.name<<endl;
    cout<<"Hours worked: "<<e.hoursWorked<<endl;
    cout<<"Hourly rate: "<<e.hourlyRate<<endl;
    cout<<"Gross Pay: "<<e.grossPay<<endl;
}
int main()
{
    employee e1;
    in(e1);
    out(e1);
    return 0;
}   