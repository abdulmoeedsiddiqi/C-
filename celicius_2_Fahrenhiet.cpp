#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    double C , F ;
    cout<<"Enter temperature in Celcius: ";
    cin>>C;
     F=9/5 * C + 32;
     cout<<"Temperature in fahrenheit: "<<F<<endl;
    return 0;
}