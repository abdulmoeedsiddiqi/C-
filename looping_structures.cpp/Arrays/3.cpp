#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int num[5];
    for(int i=0 ; i<5 ; i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>num[i];
        sum+=num[i];
    }
    cout<<"The sum of numbers are "<<sum<<endl;
    cout<<"The average is "<<sum/5<<endl;
    return 0;
}