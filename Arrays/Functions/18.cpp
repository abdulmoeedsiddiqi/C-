#include<iostream>
using namespace std;
float calculateMin(float arr[],int n){
    float min=arr[0];
    for(int i=0;i<n;i++){
        if(min > arr[i])
        min=arr[i];
    }
    return min;
}
int main()
{
    float arr[10],min;
    cout<<"Enter 10 values:\n";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    min=calculateMin(arr,10);
    cout<<"The minimum value is "<<min;
    return 0;
}