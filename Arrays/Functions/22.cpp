#include<iostream>
using namespace std;
void show(int arr[]){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int arr[5];
    cout<<"Enter 5 values:\n";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"You entered values:\n";
        show(arr[i]);
    return 0;
}