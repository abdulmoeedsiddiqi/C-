#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,sum=0,count=0;
    cout<<"Enter a number: ";
    cin>>n;
    int max,min;
    max=min=n;
    while(n>0){
sum=sum+n;
count++;
if(n>max){
    max=n;
}
else if(n<min){
    min=n;
}
cout<<"Enter a number: ";
cin>>n;
    }

if(count){
cout<<"Avereage of the numbers are "<<sum/count<<endl;
    cout<<"The maximum number is "<<max<<endl;
    cout<<"The minimum number is "<<min<<endl;

}
else{
    cout<<"No positive number is enterd by the user. "<<endl;
}
    
    
    return 0;
}