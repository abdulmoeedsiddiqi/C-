#include<iostream>
using namespace std;
int main()
{
    int salary , grade ;
    double bonus; 
    cout<<"Enter salary: "; cin>>salary;
    cout<<"Enter grade: "; cin>>grade;
    if(grade > 15){
    salary = salary + salary*0.5;
    }
    else{
        salary=salary + salary * 0.25;
    }
    cout<<"Your total salary is "<<salary;
    return 0;
}