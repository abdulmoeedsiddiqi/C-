#include<iostream>
using namespace std;
int main()
{
    //1 less to more
    // for(int i=1 ; i<=5 ;i++){
    //     for(int j=5; j>=i; j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //2  more to less

    // for(int j=5 ; j>=1 ; j--){
    //     for(int i=1 ; i<=j ; i++){
    //         cout<<'*';
    //     }
    //     cout<<endl;
    // }

//3  less to more
// for(int i=1 ; i<=5 ; i++){
//     for(int j=1 ; j<=i ; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// 4 less to more
for(int i=5 ; i>=1 ; i--){
    for(int j=5 ; j>=i ; j--){
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}