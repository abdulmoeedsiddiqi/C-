#include<iostream>
using namespace std;
void table(int a){
    for(int i=0 ; i<10 ; i++){
        cout<<a<<"x"<<i<<"="<<a*i<<endl;
    }

}
int main()
{
    int a;
    cin>>a;
    table(a);
    return 0;
}