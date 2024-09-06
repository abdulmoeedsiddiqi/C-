#include<iostream>
using namespace std;
struct DOB{
    int day, month, year;
};
DOB in(){
    int day, month, year;
    cout<<"Enter your Birthday details:\n";
    cout<<"Enter day: "; cin>>day;
    cout<<"Enter month: "; cin>>month;
    cout<<"Enter year: "; cin>>year;
    return DOB{day,month,year};

}
show(DOB d1){
    cout<<"Your DOB is "<<d1.day<<"/"<<d1.month<<"/"<<d1.year<<endl;
}
int main()
{
    DOB d1;
    d1=in();
    show(d1);
    return 0;
}