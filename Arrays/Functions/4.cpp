#include<iostream>
using namespace std;
void func(int a){
    cout<<"Precessor is "<<a-1<<" and successors is "<<a+1<<endl;

}
int main()
{
    int a ; cin>>a;
    func(a);
    return 0;
}`