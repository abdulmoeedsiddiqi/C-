#include<iostream>
using namespace std;
struct student{
    int rollno;
    int marks[5];
    int sum=0;


    void in(){
        cout<<"Enter rollNo: ";
        cin>>rollno;
        cout<<"Enter marks of five subjects: ";
        for(int i=0;i<5;i++){
            cout<<"subject "<<i+1<<": ";
            cin>>marks[i];
            sum+=marks[i];
        }
    }

    void show(){
        cout<<"Roll # "<<rollno<<endl;
        for(int i=0;i<5;i++){
            cout<<"subject "<<i+1<<": "<<marks[i]<<endl;
        }
        cout<<"Average: "<<sum/5<<endl;
    }
};
int main()
{
    student s1;
    s1.in();
    s1.show();
    return 0;
}


