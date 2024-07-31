#include<iostream>
#include<string.h>
#include<conio.h>
#include<iomanip>
using namespace std;
double centimeters , inch ;
CentimetersToInch(){
    cout<<"Enter Centimeters: "; cin>>centimeters;
    cout<<"There are "<<setprecision(5)<<centimeters/2.54<<" Inches in "<<centimeters<<" Centimeters."<<endl;

}
 InchToCentimeters(){
    cout<<"Enter Inches: "; cin>>inch;
    
    cout<<"There are "<<setprecision(5)<<inch*2.54<<" Centimeters in "<<inch<<" Inches."<<endl;
    
 }
int main()
{
    int choice;
    cout<<"Choose one from the following.\n1. Centimeters to Inch conversion.\n2. Inch to Centimeter conversion."<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        CentimetersToInch();
        break;

        case 2:
        InchToCentimeters();
        break;

        default:
        cout<<"Invalid choice."<<endl;
    }
    return 0;
}