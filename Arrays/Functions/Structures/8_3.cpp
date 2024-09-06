#include<iostream>
using namespace std;

struct Book{
    int bookId;
    int price;
    int pages;
};


Book in(){
       int bookId;
    int price;
    int pages;
       cout<<"Enter BookID: "; cin>>bookId;
       cout<<"Enter Price: "; cin>>price;
       cout<<"Enter Pages: ";cin>>pages;

       return Book{bookId,price,pages};
    }


void show(Book b){
        cout<<"\nBookID: "<<b.bookId<<endl;
        cout<<"Price: "<<b.price<<endl;
        cout<<"Pages: "<<b.pages<<endl<<endl;
    }


int main()
{
    Book  b1, b2;
    cout<<"Enter details of Book 1;\n";
    b1=in();                  
    cout<<"Enter details of Book 2;\n";
    b2=in();
    cout<<"\nDetails of Book 1;\n";
    show(b1);
    cout<<"\nDetails of Book 2;\n";
    show(b2);
    return 0;
}