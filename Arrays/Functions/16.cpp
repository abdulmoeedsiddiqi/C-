#include<iostream>
using namespace std;
int GDC(int a, int b){
    int max,gdc;
    max=a;
    if(b>a)
     max=b;
    for(int i=1 ; i<=max; i++){
        if(a%i==0 && b%i==0){
          gdc=i;
        }
    }
    return gdc;

}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Greatest Common Diviosr= "<<GDC(a,b);
    return 0;
}