#include<iostream>
#include<string.h>
using namespace std;
    
int main()
{
int sec , hours , min , _sec ;

          cout<<"Enter seconds: ";
    cin>>sec;
    hours = sec / 3600 ;
    sec = sec % 3600 ;
    min = sec / 60 ;
    _sec = sec % 60 ;
    cout<<"Time : "<<hours<<" hr "<<min<<" min "<<_sec<<" sec."<<endl;
    
    

    return 0;
}