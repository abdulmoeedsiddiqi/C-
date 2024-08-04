#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string: "; getline(cin,s);
    for(int i=0 ; i<5 ; i++){
        cout<<s<<endl;
    }
    return 0;
}