//Printing Pakistan by goto statement 
#include<iostream>
using namespace std;
int main()
{
    int n=0;
    Pakistan:
    cout<<"Pakistan\n";
    n++;
    if(n<5) goto Pakistan;
    return 0;
}