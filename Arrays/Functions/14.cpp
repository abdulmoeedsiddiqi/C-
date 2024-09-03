#include<iostream>
using namespace std;
area(int height, int base){
    return 0.5 * height * base;

}
int main()
{
    int height,base;
    double _area;
    cout<<"Enter height and base of triangle: "; cin>>height>>base;
    _area=area(height,base);
    cout<<"Area of triangle is "<<_area;
    return 0;
}