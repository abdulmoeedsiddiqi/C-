#include<iostream>
using namespace std;
double circleArea(int rad){
 return 3.14*rad*rad;
}
int main()
{
    double rad, area;
    cout<<"Enter radius: "; 
    cin>>rad;
    area=circleArea(rad);
    cout<<"Area is "<<area;
    return 0;
}