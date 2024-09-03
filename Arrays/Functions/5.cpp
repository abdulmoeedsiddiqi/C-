#include<iostream>
using namespace std;
void func(int a ){
    int fac=1;
    for(int i=1 ; i<=a; i++){
        fac*=i;
    }
    cout<<"Factorial of "<<a<<" is "<<fac<<endl;

}
int main()
{
    int a; cin>>a;
    func(a);
    return 0;
}