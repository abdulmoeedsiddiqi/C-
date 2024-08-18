#include<iostream>
using namespace std;
int main()
{
    int a,b,next,count;
    a=b=1;
    cout<<a<<"\t"<<b;
    count=2;
    while(count <= 10){
        next=a+b;
        cout<<"\t"<<next;
        count++;
        a=b;
        b=next;
    }
    return 0;
}