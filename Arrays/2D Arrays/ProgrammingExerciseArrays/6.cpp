#include<iostream>
using namespace std;
int main()
{
    int marks[10];
    char grade;
    cout<<"Enter marks of ten students:\n";
    for(int i=0;i<10;i++){
        cin>>marks[i];
    }
    for(int i=0;i<10;i++){
        if(marks[i]>80){
            grade='A';
        }
        else if(marks[i]>60 && marks[i]<79){
            grade='B';
        }
        else if(marks[i]>40 && marks[i]<59){
            grade='C';
        }
        else{
            grade='F';
        }
    }

    for(int i=0;i<10;i++){
     cout<<"Student "<<i+1<<":\n";
     cout<<"Marks: "<<marks[i]<<endl;
     cout<<"Grade: "<<grade<<endl;
     cout<<endl;
    }
    return 0;
}