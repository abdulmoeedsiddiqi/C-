#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch >= 'a' || ch <='z' ){
        cout<<ch<<" is a small letter.";
    }
    else if(ch >= 'A' || ch <='Z'){
        cout<<ch<<" is a capital letter.";
     }
    else if(ch >= '1' || ch <='9')
    {
        cout<<ch<<" is a digit.";
    }
    else{
        cout<<ch<<" is a special character.";
    }

        return 0;
}