#include<iostream>
using namespace std;
struct student{
int marks;
char grade;
};

 void in(student & s1){
    cout<<"Enter marks: ";
    cin>>s1.marks;
    cout<<"Enter grade: ";
    cin>>s1.grade;
}

void show( student s1){
cout<<"\nMarks: "<<s1.marks<<endl;
cout<<"Grade: "<<s1.grade<<endl;

}


int main()
{
    student s1;
    in(s1);
    show(s1);
    return 0;
}