#include<iostream>
using namespace std;
int main()
{
    int choice,n;
    char ch; 
        cout<<"Select\n1. Convert ASCII value to character\n2. Convert Character value to ASCII value\n";
cin>>choice;
switch(choice){
    case 1:
    cout<<"Enter ASCII value: ";
    cin>>n;
    ch=n;
    cout<<"It's character is "<<ch;
    break;

    case 2:
    cout<<"Enter a character: ";
    cin>>ch;
    n=ch;
    cout<<"It's ASCII value is "<<n;
}

    return 0;
}