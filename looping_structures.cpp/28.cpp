#include<iostream>
using namespace std;
int main()
{
    int n,first,second;
    cout<<"Enter number: ";
    cin>>n;
   second=n%10;
   first=n/10;
   if(first > second){
    cout<<first<<" is greater than "<<second<<endl;
   }
   else{
    cout<<second<<" is greater than "<<first;
   }
    return 0;
}