#include<iostream>
using namespace std;
int main()
{
    int n , i;
    bool flag=1;
    cout<<"Enter any number: "; 
    cin>>n;
    for(i=2 ; i<n/2 ; i++){
        if(n%i==0){
            flag=0;
        }

    }

    if(flag==0){
        cout<<n<<" is not prime. ";
    }
    else{
        cout<<n<<" is prime. ";
    }

    return 0;
}