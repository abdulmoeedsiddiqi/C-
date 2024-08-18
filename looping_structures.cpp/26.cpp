#include<iostream>
using namespace std;
int main()
{
    int last, SecondLast , n;
    cout<<"Enter a number: "; cin>>n;
    last = n%10;
    SecondLast = (n/10)%10;
cout<<"The last digit is "<<last<<endl;
cout<<"The second last digit is "<<SecondLast<<endl;
    
    return 0;
}