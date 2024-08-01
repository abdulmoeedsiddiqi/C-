#include<iostream>
using namespace std;
int main()
{    int n;
    double radius;
    cout<<"Enter radius of circle: "; cin>>radius;
    cout<<"Select\n1.Area\n2.Circumference\n";
    cin>>n;
    if(n==1 || n==2){
    (n==1)?cout<<"Area: "<<3.14*radius*radius : cout<<"Circumference: "<<6.28 * radius;
    }
    else{
        cout<<"Invalid selection";
    }
    return 0;
}
