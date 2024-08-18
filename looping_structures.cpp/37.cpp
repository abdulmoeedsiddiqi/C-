#include<iostream>
using namespace std;
int main()
{
    int n,check=0;
    cout<<"Enter: "; cin>>n;
    for(int i=2 ; i<n ; i++){
        if(n%i == 0){
            check=1;
            break;
        }
    }
    if(check){
        cout<<n<<" is not a prime number. ";
    }
    else{
        cout<<n<<" is prime number. ";
    }
    return 0;
}