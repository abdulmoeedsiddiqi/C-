#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n[3] , sum=0 , prod=1 ;
    float avg ;
    for(int i= 0 ; i< 4 ; i++){
        cout<<"Enter number "<<i+1<<" : ";
        cin>>n[i];
sum+=n[i];
prod*=n[i];
    }
    avg=sum/4;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Product: "<<prod<<endl;
    cout<<"Average: "<<avg<<endl;
    
    return 0;
}