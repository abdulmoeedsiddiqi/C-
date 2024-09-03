#include<iostream>
using namespace std;
void func(){
    static int a=0;
    cout<<a<<endl;
    a++;
}
int main()
{
    for(int i=0; i<5; i++){
        func();
    }
    return 0;
}