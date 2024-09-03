#include<iostream>
using namespace std;
int mul(int a,int b){
    if(a%b==0){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    int a,b,r;
    cout<<"Enter 5 pair of intergers.\n";
    for(int i=0 ; i<5 ; i++){
        cin>>a>>b;
        r=mul(a,b);
        if(r==1){
            cout<<a<<" is multiple of "<<b<<endl;
        }
        else{
            cout<<a<<" is not multiple of "<<b<<endl;
            
        }
    }

    return 0;
}