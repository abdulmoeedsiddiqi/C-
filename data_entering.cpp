#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int age , roll_no;
    string name , address ;
    cout<<"Enter you name: ";
    getline(cin,name); 
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your address: ";
    cin.ignore();
    getline(cin,address);
        cout<<"Enter your Roll Number: ";
    cin>>roll_no;
    cout<<"'\n\n"<<"Your details are:\nName: "<<name<<"\n"<<"Age: "<<age<<endl<<"Roll# "<<roll_no<<endl<<"Address: "<<address<<endl; 
    return 0;
}