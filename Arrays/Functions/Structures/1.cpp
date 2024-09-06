#include<iostream>
#include<string.h>
using namespace std;
struct Person{
    string f_name;
    string l_name;
    int age;
    int salary;
};
int main()
{
    Person p1;
    cout<<"Enter person name:\n";
    getline(cin,p1.f_name);
    cout<<"Enter person name:\n";
    getline(cin,p1.l_name);
    cout<<"Enter age: ";
    cin>>p1.age;
    cout<<"Enter salary: ";
    cin>>p1.salary;
    
    cout<<"\nThe details are:\n";
    cout<<"First name: "<<p1.f_name <<endl;
    cout<<"Last name: "<<p1.l_name<<endl;
    cout<<"Age: "<<p1.age<<endl;
    cout<<"Salary: "<<p1.salary<<endl;
    return 0;
}