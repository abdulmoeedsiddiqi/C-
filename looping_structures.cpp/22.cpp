#include<iostream>
using namespace std;
int main()
{
        char choice;
        int n1,n2,product;
    do{
        cout<<"Enter two numbers: "; cin>>n1>>n2;
        product=n1*n2;
        cout<<"Product: "<<n1*n2<<endl;
        
        cout<<"Do You Want To Play Again: "; cin>>choice;
    }
    while(choice!='N' && choice!='n');
    cout<<"Good Bye";
    return 0;
}