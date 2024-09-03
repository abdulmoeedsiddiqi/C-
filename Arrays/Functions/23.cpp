#include<iostream>
using namespace std;
int countEven(int arr[]){
    int count=0;
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[5];
    cout<<"Enter five values:\n";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Even numbers you entered are "<<countEven(arr);

    return 0;
}