#include<iostream>
using namespace std;
int main()
{
    int num[5];
    for(int i=0 ; i<5 ; i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>num[i];
    }
    cout<<"The numbers you entered are:\n";
    for(int i=0 ; i<5 ; i++){
        cout<<"Number "<<i+1<<": "<<num[i]<<endl;
    }
    return 0;
}