#include<iostream>
# define pi 3.14
using namespace std;
   

   double Calculate_Area(double _radius){
     double area =pi * _radius * _radius ;
    return area;
    }

    double calculate_circumference(double _radius){
    double circumference =2*pi* _radius;
    return circumference ;
    }


int main()
{
    

 int choice ;
double radius;
    cout<<"Enter radius: " ; 
    cin>>radius ;
 cout<<"Choose one from the following.\n1. Area\n2. Circumference "<<endl;
  cin>> choice ;
 switch(choice){
    case 1:
    cout<<"The area is "<<Calculate_Area(radius)<<" square unit."<<endl;
    break;
    case 2 :
    cout<<"Circumference is "<<calculate_circumference(radius)<<" square unit."<<endl;
    break;
    default:
    cout<<"Invalid Choice. "<<endl;
 }   
    return 0;
}