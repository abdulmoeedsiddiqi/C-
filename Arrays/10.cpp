#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int max;
    cout<<"Enter ten numbers:\n ";
    for(int i=0 ; i<10 ; i++){
        cin>>arr[i];
    }
     max = arr[0];
    for(int i=0 ; i< 10 ; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The maximum number is "<<max<<endl;
    return 0;
}