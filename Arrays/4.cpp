#include<iostream>
using namespace std;
int main()
{
    int days=0 , curentMonth;
    int monthsDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   cout<<"Enter current month: "; cin>>curentMonth;
   cout<<"Enter the date of the month: "; cin>>days;
   for(int i=0 ; i<curentMonth-1;i++){
    days+=monthsDays[i];
   }
   cout<<"The day of the year is: "<<days<<endl;
    return 0;
}