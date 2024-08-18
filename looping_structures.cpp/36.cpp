#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,mid;
    cout<<"Enter: "; cin>>n;
    mid=n/2;
    for(int i= 1; i<=mid; i++){
        if(n%i == 0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<n<<" is a perfect number. ";
    }
    else{
        cout<<n<<" is not a perfect number. ";
    }
    return 0;
}