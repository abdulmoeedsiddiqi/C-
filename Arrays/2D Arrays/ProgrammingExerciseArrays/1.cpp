#include<iostream>
using namespace std;
isPrime(int num){
    if(num<=1){
        return false;
    }
        for(int i=2; i<num/2;i++){
            if(num%i==0){
                return false;
        }
    }
    return true;
}
int main()
{
    int arr[10], primeCount=0;
   cout<<"Enter 10 integers: ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        if(isPrime(arr[i])){
            primeCount++;
        }
    }
    cout<<"Total primes: "<<primeCount;
    return 0;
}







// for(int i=0;i<10;i++){
//         for(int j=2;j<arr[i]/2;j++){
//             if(arr[i]%j==0){
//                 prime=0;
//                 break;
//             }
//         }
//     }