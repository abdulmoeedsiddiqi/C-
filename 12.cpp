#include<iostream>
using namespace std;
int main()
{
    int n,s=0,count=0;
    cout<<"Enter number: ";
    cin>>n;
    if(n>0){
    do{
        if(cout==0)
        continue;{
      cout<<"Enter a number:";
      cin>>n;
    }
        
        s=s+n;
        count=count+1;
        cin>>n;

    }while(n>0);
    }
    
    cout<<"Sum of numbers are "<<s<<endl;
    return 0;
}