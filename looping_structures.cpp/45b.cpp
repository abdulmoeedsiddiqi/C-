#include<iostream>
using namespace std;
int main()
{
    int n;
    char a='A';
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1;i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}