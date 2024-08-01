#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: "; cin>>n;
    (n%3==0)?cout<<n<<" is divisible by 3 " : cout<<n<<" is not divisible by 3";
    return 0;
}