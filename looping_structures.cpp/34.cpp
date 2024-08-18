#include<iostream>
using namespace std;
int main()
{


int i=1,p,a=1;
    while(a<=40){
if(i%2==0){
    p=-a;
    cout<<p<<" ";
}
else{
    cout<<a<<" ";
}
a+=3;
i++;
    }
    return 0;
}