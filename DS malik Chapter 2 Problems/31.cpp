#include<iostream>
using namespace std;
int main()
{
    int choice , months;
    cout<<"Choose one from the following:\n1. Standard Adult Membership\n2. Child Membership\n3.Senior Citizen Membership\n4. Quit the program."<<endl;
    cin>>choice;
    cout<<"How many months? "; 
    cin>>months;
    switch(choice){
     case 1:
     cout<<"Total charges are Rs. "<<50*months;
     break;
     case 2:
     cout<<"Total charges are Rs. "<<20*months;
     break;
     case 3:
     cout<<"Total charges are Rs. "<<30*months;
     break;
     default:
     cout<<"Invalid choice.";

    }
    return 0;
}