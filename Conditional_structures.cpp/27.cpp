#include<iostream>
using namespace std;
int voterAge(){
    return 18;
}
int main()
{
    int age;
    cout<<"Enter your age: "; cin>>age;
    if(age>=voterAge() ){
        cout<<"You are eligible to vote.";
    }
    else{
        cout<<"You are not eligible to vote.";
    }
    return 0;
}