#include<iostream>
using namespace std;
void swap(int& a, int & b);
int main()
{
    int a,b;
    cout<<"Enter two numbers: "; cin>>a>>b;
    cout<<"Values before swapping:\n"<<a<<" "<<b<<endl;
swap(a,b);
cout<<"Value after swapping\n"<<a<<" "<<b<<endl;
    return 0;
}
void swap(int& a, int & b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}