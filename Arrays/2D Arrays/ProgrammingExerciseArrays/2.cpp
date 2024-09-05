#include<iostream>
using namespace std;
int main()
{
    int marks[3], roll[3];
    cout<<"Enter roll:\n";
    for(int i=0;i<3;i++){
        cin>>roll[i];
    }
    int max=0,index;
    cout<<"Enter marks:\n";
    for(int i=0;i<3;i++){
        cin>>marks[i];
        if(marks[i]>max){
            max=marks[i];
            index=i;
        }
    }
    cout<<"The maximum marks is "<<max<<" of roll# "<<roll[index];
    return 0;
}