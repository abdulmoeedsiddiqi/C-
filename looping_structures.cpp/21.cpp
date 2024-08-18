#include<iostream>
using namespace std;
int main()
{
    int e , p , product=1 , count = 1;
    cout<<"Enter first number: "; cin>>e;
    cout<<"Enter second number: "; cin>>p;
do{
    product*=e;
    count++;
}while(count <= p);
cout<<product;
    
    return 0;
}