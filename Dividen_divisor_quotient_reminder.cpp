#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int divident , divisor , quotient , reminder ;
    cout<<"Enter the dividend : ";
    cin>>divident ;
    cout<<"Enter the divisor : ";
    cin>>divisor ;
    if(divisor==0){
        cout<<"Error : Division by zero is not allowed";
    }
    else{
    quotient=divident / divisor ;
    reminder = divident % divisor ;
    cout<<"Quotient = "<<quotient<<endl<<"Reminder = "<<reminder; 

    }


    return 0;
}