#include<iostream>
using namespace std;
struct time{
    int hours;
    int minutes;
    int seconds;
};
int main()
{
   time arr[2],res;
   for(int i=0;i<2;i++){
    cout<<"Enter time "<<i+1<<":\n";
    
    cout<<"Hours: ";
    cin>>arr[i].hours;

    cout<<"Minutes: ";
    cin>>arr[i].minutes;

    cout<<"Seconds: ";
    cin>>arr[i].seconds;
   }

   res.hours=arr[0].hours + arr[1].hours ;
   res.minutes=arr[0].minutes + arr[1].minutes;
   res.seconds=arr[0].seconds + arr[1].seconds;

   cout<<"Total Time: "<<res.hours<<"/"<<res.minutes<<"/"<<res.seconds;
    return 0;

}