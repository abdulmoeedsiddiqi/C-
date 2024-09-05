// #include <iostream>

// using namespace std;

// int main() {
//     int mango[100], orange[100], banana[100];
//     int customerNo, numMangoes, numOranges, numBananas;

//     cout << "Enter the number of customers: ";
//     cin >> customerNo;

//     for (int i = 1; i <= customerNo; i++) {
//         cout << "\nCustomer No. " << i << endl;
//         cout << "Enter the number of mangoes: ";
//         cin >> numMangoes;
//         mango[i] = numMangoes;

//         cout << "Enter the number of oranges: ";
//         cin >> numOranges;
//         orange[i] = numOranges;

//         cout << "Enter the number of bananas: ";
//         cin >> numBananas;
//         banana[i] = numBananas;
//     }

//     cout << "\n\nCustomer No.\tMangoes\tOranges\tBananas\tTotal Bill\n";
//     for (int i = 1; i <= customerNo; i++) {
//         int totalBill = mango[i] * 20 + orange[i] * 10 + banana[i] * 5;
//         cout << i << "\t\t" << mango[i] << "\t\t" << orange[i] << "\t\t" << banana[i] << "\t\tRs. " << totalBill << endl;
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
    
//     int customers;
//     cout<<"Enter number of customers: "; 
//     cin>>customers;
//     int mango[customers], orange[customers], banana[customers] , bill[customers];
//     int numMango , numOrange, numBanana;


//     for(int i=0;i<customers;i++)
//     {
//  cout<<"Customer "<<i+1<<":\n";
//  cout<<"Enter number of mangoes: ";
//  cin>>numMango;
//  mango[i]=numMango;

//  cout<<"Enter number of Oranges: ";
//  cin>>numOrange;
//  orange[i]=numOrange;

//  cout<<"Enter number of Bananas: ";
//  cin>>numBanana;
//  banana[i]=numBanana;
//     }

//     for(int i=0;i<customers;i++)
//     {
//         bill[i]=mango[i]*20 + orange[i]*10 + banana[i]*5;
//     }
//     cout<<"Customer\tMangoes\tOranges\tBanana\tTotalbill\n";
//     for(int i=0; i<customers; i++)
//     {
//         cout<<i+1<<"\t"<<mango[i]<<"\t"<<orange[i]<<"\t"<<banana[i]<<"\t"<<bill[i]<<endl;
//     }
//     return 0;
// }



#include <iostream>
using namespace std;

int main() {

int rows = 5;// for customers
int cols = 3;


int shop[rows][cols];

//initializing the 2d array with 0
  for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            shop[i][j] = 0;
        }
    }

for(int i=0; i < rows; i++){
    
    for(int j=0; j < cols-1;  ){

    cout << "\nCustomer " << i+1 << endl;
    cout << "Enter the number of mangoes you want to buy: ";
    cin >> shop[i][j];
    ++j;

    //cout << "\nEnter for 0 1"<<endl;
    cout << "Enter the number of oranges you want to buy: ";
    cin >> shop[i][j];

    ++j;
    //cout <<"\nEnter for 0 2"<<endl;
    cout << "Enter the number of bananas you want to buy: ";
    cin >> shop[i][j];

    }

}

/*cout << "Printing array"<<endl;
for(int i=0; i < rows; i++){

    for(int j=0; j < cols; j++){

        cout << shop[i][j] << " ";
    }

    cout << endl;
}*/


cout << endl;
for(int i=0; i < rows; i++){

    for(int j=0; j < 1; j++){

        cout << "\nCustomer " << i+1 <<endl;
        cout << "No of Mangoes Purchased: " << shop[i][j]<<endl;
        cout << "No of Oranges Purchased: " << shop[i][j+1]<<endl;
        cout << "No of Bananas Purchased: " << shop[i][j+2]<<endl;

        cout << "Total Bill of Customer " << i+1 << " : " << (shop[i][j]*20) + (shop[i][j+1]*10) + (shop[i][j+2] * 5) << endl;

    }
}
 
  return 0;
}