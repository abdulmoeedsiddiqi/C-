#include<iostream>
using namespace std;
int main()
{
    int n,o,s=0;
    cout<<"Enter: "; cin>>n;
    for(int o=1 ; o<n ;o+=2){
s=s+o;

    }
    cout<<"The sum of odd number to "<<n<<" is "<<s;
    return 0;
}