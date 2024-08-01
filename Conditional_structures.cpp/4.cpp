#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3 , average;
    cout<<"Enter marks of three subjects: "; cin>>n1>>n2>>n3;
    average = (n1+n2+n3)/3;
    if(average>80){
        cout<<"Congratulation! You are above standord. Admission granted";
    }
    else{
        cout<<"Alas! You are below standard, Try again ";
    }
    return 0;
}