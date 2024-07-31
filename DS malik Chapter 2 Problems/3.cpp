#include<iostream>
int main(){
    double n1,n2,n3,average;
    std::cout<<"Enter first number: ";
    std::cin>>n1;
    std::cout<<"Enter Second number: ";
    std::cin>>n2;
    std::cout<<"Enter third number: ";
    std::cin>>n3;
    average=(n1+n2+n3)/3;
    std::cout<<"The average of "<<n1<<", "<<n2<<", "<<n3<<", is "<<average<<std::endl;
    return 0;

}