#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int hours;
    cout<<"Enter hours: "; cin>>hours;
    int week , days , _hours ;
    week = hours/168;
    _hours = hours%168;
    days=_hours/24;
    _hours = _hours % 24;
    cout<<hours<<" hours = "<<week<<" week, "<<days<<" days, "<<_hours<<" hours."<<endl;
    return 0;
}