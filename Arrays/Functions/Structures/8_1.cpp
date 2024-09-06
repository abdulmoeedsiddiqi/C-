#include<iostream>
using namespace std;
struct student{
    int rollNo;
    int marks;
    float avg;
    char grade;
};


student in(){
    int rollNo;
    int marks;
    float avg;
    char grade;
    cout<<"Enter roll# ";  cin>>rollNo;
    cout<<"Enter marks ";  cin>>marks;
    cout<<"Enter average ";  cin>>avg;
    cout<<"Enter grade ";  cin>>grade;

    return student{rollNo, marks, avg, grade};

}


void show(student s1){
    cout<<"\nYour details are\n";
    cout<<"Roll # "<<s1.rollNo<<endl;
    cout<<"Marks: "<<s1.marks<<endl;
    cout<<"Average: "<<s1.avg<<endl;
    cout<<"Grade: "<<s1.grade<<endl;
}


int main()
{
    student s1;
    s1=in();
    show(s1);
    return 0;
}