#include<iostream>
using namespace std;
int main()
{
    int a,b,c , min;
    cout<<"Enter three numbers: "; cin>>a>>b>>c;
    if(a==b){
        if(a==c){
            cout<<"All numbers are equal";
        }
        else{
            cout<<"All numbers are not equal";
        }
    }
    return 0;
}