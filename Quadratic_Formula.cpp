#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    double x1,x2,disc;
    cout<<"Enter coefficient of x^2: "; 
    cin>>a;
    cout<<"Enter coefficient of x: "; 
    cin>>b;
    cout<<"Enter constant term: "; 
    cin>>c;
    disc= pow(b,2)- 4 * a * c;
    x1= ( -b + sqrt(disc) )/ 2*a ;
    x2= ( -b - sqrt(disc) )/ 2*a ;
    if( disc >= 0){
    cout<<"The roots are: "<<endl;
    cout<<x1<<"  "<<x2<<endl;
    }
    else{
    cout<<"The roots are complex."<<endl;
    }

    return 0;
}