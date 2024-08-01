#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    string name ;
    double studyHours;
    cout<<"Enter you name: ";
    getline(cin,name);
    cout<<"Enter study hours: ";
    cin>>studyHours;
    cout<<"Congratulations! "<<name<<" You need "<<studyHours<<" for exams .";
    return 0;
}