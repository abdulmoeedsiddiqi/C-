// #include<iostream>
// using namespace std;


// struct Book{
// int id;
// int pages;
// int price;
// };


// void in(Book  b[5] ){
//     for(int i=0; i<5; i++){ //input
//         cout<<"\nEnter details of Book "<<i+1<<":\n";
//         cout<<"Id: ";
//         cin>>b[i].id;
//         cout<<"Pages: ";
//         cin>>b[i].pages;
//         cout<<"Price: ";
//         cin>>b[i].price;
//     }

// }

// int calculateMax(Book  b[5]){
//  int  max=0,i;


//  for(i=0; i<5; i++){
//         if(b[i].price > b[max].price){
//             max=i;
//         }
//     }

//     return max;
// }



// void show(Book b[5]){
//    int max;
//    max= calculateMax(b);
//     cout<<"\nDetails of most expensive book:\n";
//     cout<<"Id: "<<b[max].id<<"\n";
//     cout<<"Pages: "<<b[max].pages<<"\n";
//     cout<<"Price: "<<b[max].price<<"\n";
// }


// int main()
// {
//     Book b[5];
//     in(b);

// show(b);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// // func(int arr[]){
// //     cout<<arr[0];
// // }
// int main()
// {
//     int arr[5]={21,2,3,4,5};
//     //func(arr);
//     cout<<*arr;
//     return 0;

// }


// #include<iostream>
// using namespace std;
// modify(int & a, int & b){
//     a=b=10;
// }
// int main()
// {
//     int a=4,b=2;
//     modify(a,b);
//     cout<<a<<" "<<b;    
//     return 0;
// }


