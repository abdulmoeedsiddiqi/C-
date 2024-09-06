#include<iostream>
using namespace std;
struct employee{int id ; 
int salary;
};
employee in(){
    employee  e;
    cout<<"Enter id and salary of employee"<<endl;
    cin>>e.id>>e.salary;
    return e;

}
void out(const employee& e){
    cout<<"Employee Id: "<<e.id<<endl;
    cout<<"Employee Salary: "<<e.salary<<endl;

}
int main()
{
    employee e1,e2;
    e1=in();
    out(e1);

    return 0;
}