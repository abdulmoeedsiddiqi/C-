#include<iostream>
using namespace std;
int main()
{
    
    int a=1;
    for(int i=1; i<=3 ; i++)
    {
        for(int j=3 ; j>=i; j--)
        {
            cout<<" ";
        }
        for(int k=1; k<= (2 * i)-1 ; k++)
        {
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    return 0;
}