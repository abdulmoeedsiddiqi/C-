#include<iostream>
using namespace std;
int main()
{
    int arr[10] , check;
    cout<<"Enter 10 numbers:\n";
    for(int i=0 ; i<10 ; i++){
        cin>>arr[i];
        
    }

    for(int i = 0; i < 10; i++){
        bool check = isPrime(arr[i]);
        if(check){
            cout<<arr[i]<<" is a prime number\n";
        }
    }

for(int j=0 ; j<10 ; j++)
{
    check=1;
  for(int i=2 ; i< arr[j]/2 ; i++){
    if(arr[j] % i !=0 ){
        check = 0;
    }

    if(check == 0){
        cout<<arr[j]<<" is prime number."<<endl;
    }
  }
}
    return 0;
}





