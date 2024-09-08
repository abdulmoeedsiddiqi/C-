#include<iostream>
using namespace std;
struct Book{
    int price;
    string name;
};
void twotimes(Book & b1){
    b1.price = 2 * b1.price;
    
}
int main()
{
    Book b1;
    cout<<"Enter price: ";
    cin>>b1.price;
    cin.ignore();
    cout<<"Enter name: ";
    getline(cin,b1.name);
    twotimes(b1);
    cout<<"Price: "<<b1.price<<endl;
    cout<<"Name: "<<b1.name<<endl;
    return 0;
}