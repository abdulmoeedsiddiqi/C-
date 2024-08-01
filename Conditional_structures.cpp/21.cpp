#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter month: "; cin>>m;
    if(m == 2){
        cout<<"The number of days is 28 or 29";
    }
    else if(m == 1 || m == 3 || m == 5 ||m == 7 || m == 8 || m == 10 || m == 12){
        cout<<"The number of days is 31.";
    }
    else{
        cout<<"The number of days is 30.";
    }
    return 0;
}