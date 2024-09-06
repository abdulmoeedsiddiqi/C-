#include<iostream>
using namespace std;
struct Rectanlge{
int length;
int width;
int calculate_area(){
    return length*width;
}
int calculate_perimeter(){
    return 2*(length+width);
}
};
int main()
{
    Rectanlge r1;
    r1.length=10;
    r1.width=5;
    cout<<"Area: "<<r1.calculate_area()<<endl;
    cout<<"Perimeter: "<<r1.calculate_perimeter()<<endl;

    return 0;
}