#include<iostream>
using namespace std;
struct Book{
    string name;
    int pages;
    int price;
};


void in(Book & b){
    cout<<"Enter book name: "; 
    cin.ignore();
    getline(cin,b.name);
    cout<<"Enter book pages: ";
    cin>>b.pages;
    cout<<"Enter bok price: ";
    cin>>b.price;
}

Book morePrice(Book & b1 , Book & b2 ){
    if(b1.price > b2.price)
    {
        return b1;
    }
    else{
        return b2;
    }
}


show(Book & b1, Book & b2 , Book & b3){
   b3 = morePrice(b1,b2);
cout<<"Book with more Price:\n";
cout<<"Author: "<<b3.name<<endl;
cout<<"Pages: "<<b3.pages<<endl;
cout<<"Price: "<<b3.price<<endl;
}
int main()
{
    Book b1,b2,b3 ;
    cout<<"Enter book 1 details:\n";
    in(b1);
    cout<<"Enter book 2 details:\n";
    in(b2);
    show(b1,b2,b3);
    return 0;

    
}