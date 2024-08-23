#include<iostream>
using namespace std;
int main()
{
    int a=4;
    for(int i=1 ; i<=4 ; i++){
        for(int j=4 ; j>=i ; j--){
        cout<<a<<"\t";
        }
        cout<<endl;
        --a;
    }
    return 0;
}