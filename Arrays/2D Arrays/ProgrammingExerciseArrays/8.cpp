#include<iostream>
using namespace std;
int main()
{
    float arr[10], sum=0, avg;
    cout<<"Enter ten values: ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    avg=sum/10;
    cout<<"Average: "<<avg<<endl;
    cout<<"The values which are greater than average are:\n";
    for(int i=0;i<10;i++){
        if(arr[i]>avg){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}