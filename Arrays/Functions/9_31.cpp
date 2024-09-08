#include<iostream>
using namespace std;
struct time{
    int hours;
    int minutes;
    int seconds;
};
void in(time & t1){
    cout<<"Enter time in hours: ";
    cin>>t1.hours;
    cout<<"Enter time in minutes: ";
    cin>>t1.minutes;
    cout<<"Enter time in seconds: ";
    cin>>t1.seconds;
}


increment(time & t1){
    t1.seconds = 2 * t1.seconds;
    if(t1.seconds == 60){
        t1.minutes=t1.minutes + 1;
        t1.seconds=0;

    }
    if(t1.minutes == 60){
        t1.hours= t1.hours + 1;
        t1.minutes=0;
    }
    
}


show(const time & t1){
    cout<<"Time: "<<t1.hours<<"/"<<t1.minutes<<"/"<<t1.seconds<<endl;
}



int main()
{
    time t1;
    in(t1);
    increment(t1);
    show(t1);
    return 0;
}