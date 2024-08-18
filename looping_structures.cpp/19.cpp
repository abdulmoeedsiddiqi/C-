#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    for(int i=1 ; i<=50 ; i++){
sum= sum + (i*i*i) ;
    }
    cout<<"The sum is "<<sum<<endl;
    return 0;
}