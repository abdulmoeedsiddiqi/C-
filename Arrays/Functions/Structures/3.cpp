#include<iostream>
using namespace std;
struct Car
{
    string brand;
    string model;
    string color;
    int mileage;
    int speed;
    
    Car(string _brand, string _model, string _color , int _mileage){
        brand= _brand;
        model = _model;
        mileage = _mileage; 
        color = _color;
    }

    showDetails(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Color: "<<color<<endl;        
        cout<<"Mileage: "<<mileage<<endl;
        cout<<"Speed: "<<speed<<endl;

    }

    drive(){
        speed=60;
        cout<<"The car is now driving, Speed: "<<speed<<endl;
    }

    accelerate(int increase){
        speed+=increase;
        cout<<"The car is now accelerating, Speed: "<<speed<<endl;
    }

    stop(){
        speed=0;
        cout<<"The car has been stopped.\n";
    }

    park(){
        if(speed == 0){
            cout<<"Car has been parked.\n";
        }
        else{
            cout<<"Car cannot be  parked while driving.\n";

        }
    }
};
int main()
{
    Car c1("Toyota","17","Grey",2000);
    c1.drive();
    c1.accelerate(120);
    c1.stop();
    c1.park();
    c1.showDetails();
    return 0;
}