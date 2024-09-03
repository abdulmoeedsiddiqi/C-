#include<iostream>
using namespace std;
void func(int a , char op){
    
    for(int i=1 ; i<=a ; i++){
        for(int j=1 ; j<=a; j++){
            cout<<op;
        }
        cout<<endl;
    }
}
int main()
{
    int a;
    char op;
    cout<<"Enter a number: "; cin>>a;
    cout<<"Enter a character: "; cin>>op;
    func(a,op);
    return 0;
}