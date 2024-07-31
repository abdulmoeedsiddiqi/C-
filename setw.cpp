#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main()
{
    int n1 , n2 ;
    cout<<"Enter staring number: "; cin>>n1;
    cout<<"Enter ending number: "; cin>>n2;
    cout<<setw(5)<<"Number"<<setw(12)<<"Square"<<setw(12)<<"Cube"<<endl;
    for(int i= n1 ; i<=n2 ; i++){
        cout<<setw(4)<<i<<setw(12)<<i*i<<setw(14)<<i*i*i<<endl;
    }
    return 0;
}