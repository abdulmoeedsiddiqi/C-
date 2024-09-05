// #include<iostream>
// using namespace std;
// int main()
// {
//     int score[5][5]={

//         {1,2,3,4,5},
//         {6,7,8,9,10},
//         {9,8,7,6,5},
//         {4,3,2,1,0},
//         {0,2,0,3,0}
//     };
//     // for(int i=0;i<5;i++){
//     //     for(int j=0; j<5; j++){

//     //     }
//     // }
//     int row, student;
//     cout<<"Enter row number: ";
//     cin>>row;
//     cout<<"Enter student number: ";
//     cin>>student;
//     cout<<"Score: "<<score[row-1][student-1];
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//    int i,j,m;
//    int a[5]={8,10,1,14,16};
//    i=++a[2];
//    m=a[i++];
//    cout<<j;
   
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int arr[2][3]={1,2,3,4,5,6};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}