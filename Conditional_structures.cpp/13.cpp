#include<iostream>
using namespace std;
int main()
{
    
    double units ,cost  ;
    cout<<"Enter units consumed: "; cin>>units;
    
    if(units <= 300){
        cost=2 * units;
    }
    else if( 300 > units>= 500){
        cost=5 * units;
    }
    else{
        cost=7 * units;

    } 
    if(cost > 2000 ){
        cost= cost + (cost*0.05);
    }
    double total_cost = cost + 150 ;
    cout<<"Total cost is "<<total_cost;

    return 0;
}