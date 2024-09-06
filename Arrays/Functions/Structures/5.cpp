// #include <iostream>
// #include <string>
// using namespace std;

// // define structure
// struct Person {
//     string first_name;
//     string last_name;
//     int age;
//     float salary;
// };

// // declare functions
// Person get_data();
// void display_data(const Person&);

// int main() {

//     Person p = get_data();
//     display_data(p);

//     return 0;
// }

// // define function to return structure variable
// Person get_data() {

//     Person p;
    
//     string first_name;
//     string last_name;
//     int age;
//     float salary;
    
//     cout << "Enter first name: ";
//     cin >> first_name;
//     cout << "Enter last name: ";
//     cin >> last_name;
//     cout << "Enter age: ";
//     cin >> age;

//     cout << "Enter salary: ";
//     cin >> salary;
    
//     // return structure variable
//     return Person{first_name, last_name, age, salary};
// }

// // define function to take
// // structure variable as an argument
// void display_data(const Person& p) {
//     cout << "\nDisplaying Information." << endl;
//     cout << "First Name: " << p.first_name << endl;
//     cout << "Last Name: " << p.last_name << endl;
//     cout << "Age: " << p.age << endl;
//     cout << "Salary: " << p.salary;
// }



#include<iostream>
using namespace std;

struct Car{
string brand;
string model;
int speed; 
};


Car in(){
string brand;
string model;
int speed; 

cout<<"Enter brand: "; cin>>brand;
cout<<"Enter model: "; cin>>model;
cout<<"Enter speed: "; cin>>speed;

return Car{brand,model,speed};
}

show(const Car &c){
    cout<<c.brand<<endl;
    cout<<c.model<<endl;
    cout<<c.speed<<endl;
}

int main()
{ 
    Car c; 
    c=in();
    show(c);
    
        return 0;
}