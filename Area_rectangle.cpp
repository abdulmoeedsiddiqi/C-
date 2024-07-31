#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    float width , height , area ;
    cout<<"Enter height: ";
    cin>>height;
    cout<<"Enter width: ";
    cin>>width;
    area=width*height;
    cout<<"The area of rectangle having width "<<width<<" and height "<<height<<" is "<<area;
    return 0;
}