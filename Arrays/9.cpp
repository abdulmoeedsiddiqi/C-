#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter five numbers:\n";
    for(int i=0 ; i<5 ; i++ ){
        cin>>arr[i];
    }
    cout<<"Original Array is \n";
    for(int i=0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nArray in reverse order is\n";
    for(int i=4 ; i>=0 ; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}