#include<iostream>
using namespace std;
func(int n){
    cout<<"Value: "<<n<<" Square Value: "<<n*n<<endl;
}
int main()
{
        int arr[5];
    cout<<"Enter five values:\n";
    for(int i=0;i<5;i++){
        cin>>arr[i];
        func(arr[i]);
    }
    return 0;
}