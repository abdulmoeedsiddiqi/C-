#include<iostream>
using namespace std;
void func(int a ){
//Prime
    int prime=1;
    for(int i=2 ; i<a/2 ; i++){
        if(a%i==0){
            prime=0;
            break;
        }
    }
    if(a%2==0 && prime==1){
        cout<<a<<" is Even Prime number.";

    }
     else if(a%2!=0 && prime==0){
        cout<<a<<" is Odd number, not Prime";

    }
    else if(a%2==0 && prime==0){
        cout<<a<<" is Even number, not Prime";
    }
    

    else if(a%2!=0 && prime==1){
        cout<<a<<" is Odd Prime number";

    }
}
int main()
{
    int a;
    cout<<"Enter: ";
    cin>>a;
    func(a);
    return 0;
}



