#include<iostream>
using namespace std;
int main()
{
    int prod=1;
    for(int i=1; i<10 ; i=i+2){
    prod*=i;
    }
cout<<"Product is "<<prod;
    return 0;
}