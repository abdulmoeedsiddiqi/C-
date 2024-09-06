// #include <iostream>
// #include <string>
// using namespace std;

// struct Person {
//     string first_name;
//     string last_name;
//     int age;
//     float salary;
// };

// // declare function with
// // structure variable type as an argument
// void display_data(const Person&);

// int main() {
//     // initialize the structure variable
//     Person p {"John", "Doe", 22, 145000};

//     // function call with 
//     // structure variable as an argument
//     display_data(p);

//     return 0;
// }

// void display_data(const Person& p) {
//     cout << "First Name: " << p.first_name << endl;
//     cout << "Last Name: " << p.last_name << endl;
//     cout << "Age: " << p.age << endl;
//     cout << "Salary: " << p.salary;
// }



#include<iostream>
using namespace std;
struct car{
    string brand;
    string model;
    string color;
};
show(const car& c1){
    // c1.brand="Honda";  // if declared paremter is cont then it generates error.
  cout<<c1.brand<<endl;
    cout<<c1.model<<endl;
    cout<<c1.color<<endl;
}
int main()
{
    car c1{"Toyota","Lrz 12", "Grey"};
    show(c1);    
    return 0;
}