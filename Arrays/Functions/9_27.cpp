#include<iostream>
using namespace std;
struct Country{
    string name;
    int population; // in millions
};


void in(Country & c){
    cout<<"Enter name: ";
    cin>>c.name;
    cout<<"Enter population in millions: ";
    cin>>c.population;
}

Country calculateMaxPopulation(Country  c1 , Country c2){
    if (c1.population > c2.population){
        return c1;
    }
    else{
        return c2;
    }
   }

show(const Country & maxPopulationCountry){
    cout<<"\nCountry with max population: "<<maxPopulationCountry.name<<endl;
    cout<<"Its Population: "<<maxPopulationCountry.population<<endl;

}

int main()
{
    Country c1,c2,maxPopulationCountry;
    cout<<"Enter details of Country 1:\n";
    in(c1);
    cout<<"Enter details of Country 2:\n";
    in(c2);
    maxPopulationCountry=calculateMaxPopulation(c1,c2);
    show(maxPopulationCountry);
    return 0;
}