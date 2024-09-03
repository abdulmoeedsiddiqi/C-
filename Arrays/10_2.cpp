#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter ten numbers:\n";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int check=0;
    for(int j=0 ; j < 10 ; j++){
        for(int i=2; i<arr[j]/2;i++){
            if(arr[j]%i!=2){
check++; //  prime
            }
        }

    }
    cout<<"Prime numbers are "<<check;
    return 0;
}