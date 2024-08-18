#include<iostream>
using namespace std;
int main()
{
    int s,e,i;
    cout<<"Enter first number: "; cin>>s;
    cout<<"Enter second number: "; cin>>e;
   for(i=1; i>0 ; i++){
   if(i%s==0 && i%e==0){
    break;
   }
   }
   cout<<"LCM of "<<s<<" and "<<e<<" is "<<i;

    return 0;
}