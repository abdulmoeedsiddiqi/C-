#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    string company;
    string model;
    int mileage;
    int speed;

    car(string _company, string _model , int _mileage){
        company = _company;
        model=_model;
        mileage=_mileage;
        speed=0;
    }

    showDetails(){
        cout<<"Company: "<<company<<", model: "<<model<<", milaage: "<<mileage<<", Speed: "<<speed<<endl;
    }

    drive(){
        speed=60; //default speed
        cout<<"Car is now driving, Speed: "<<speed<<endl;
    }

    accelerate(int increase){
        speed+=increase;
        cout<<"Car is now accelerating, speed: "<<speed<<endl;
    }

    stop(){
        speed=0;
        cout<<"Car has stopped"<<endl;
    }

    park(){
        if(speed == 0){
            cout<<"Car is now parked"<<endl;
        }
        else{
            cout<<"Car cannot ne park while driving.\n";
        }
    }


};
int main()
{
    car c1("Toyota","LRZ 1723",2000);
    c1.drive();
    c1.accelerate(40);
    c1.stop();
    c1.park();
    c1.showDetails();
    return 0;
}