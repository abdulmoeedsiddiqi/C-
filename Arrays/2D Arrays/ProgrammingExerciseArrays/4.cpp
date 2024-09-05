#include<iostream>
using namespace std;
int main()
{
    int salary[10];
    string name[10];
    for(int i=0;i<10;i++){
        cout<<"Enter name of employee "<<i+1<<": ";
        getline(cin,name[i]);
        //cin.ignore();
        cout<<"Enter salary of employee "<<i+1<<": ";
        cin>>salary[i];
        cin.ignore();
        
    }

    for(int i=0;i<10;i++){
        if(salary[i]*12>=250000){
            cout<<"Name: "<<name[i]<<endl;
            cout<<"Salary: "<<salary[i]<<endl;
            cout<<"Tax to be paid."<<endl;
        }
        else{
            cout<<"Name: "<<name[i]<<endl;
            cout<<"Salary: "<<salary[i]<<endl;
            cout<<"Tax is not to be paid."<<endl;            
        }
    }
    return 0;
}