#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int x ,range;
    float sum=0,den;
    cout<<"Enter the value of x: "; cin>>x;
    cout<<"Enter range: "; cin>>range;
    for(int i=1 ; i<range ; i++){
        den=pow(x,i);
sum=sum+( 1 /den );
    }
    cout<<"Sum: "<<sum;

    return 0;
}