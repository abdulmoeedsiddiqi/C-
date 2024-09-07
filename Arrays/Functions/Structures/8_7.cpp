#include<iostream>
using namespace std;
struct  Student{
    int marks[3];
    char grade;

    in(){
        cout<<"Enter marks: ";
        for(int i=0; i<3; i++){
            cin>>marks[i];
        }
      
        cout<<"Enter grade: ";
        cin>>grade;
    }
    show(){
        cout<<"Marks: ";
        for(int i=0; i<3; i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};
   
// Student in( Student &s){
//    cout<<"Enter marks: "; cin>>s.marks;
//     cout<<"Enter grade: "; cin>>s.grade;
//     return s;
// }
// void show(Student s){
//     cout<<"Marks: "<<s.marks<<endl;
//     cout<<"Grade: "<<s.grade<<endl;
// }
// int main()
// {
//     Student s1,s2;
//     s2=in(s1);
//     show(s2);
//     return 0;
// }


int main(){
    Student s1,s2;
    s1.in();
    s2=s1;
    s2.show();
}