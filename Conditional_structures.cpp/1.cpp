#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter marks: "; cin>>marks;
    if(marks>40){
        cout<<"Congratulation! You have Passed";
    }
    else{
        cout<<"Alas! You failed. ";
    }
    return 0;
}