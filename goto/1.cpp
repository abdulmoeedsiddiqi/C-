#include<iostream>
using namespace std;
int main()
{
    int n=0;
    loop:
    cout<<"Hello World\n";
    n++;
    if(n<3) goto loop;
    return 0;
}