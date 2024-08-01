// #include<iostream>
// using namespace std;
// int main()
// {
//     int n; 
//     cout<<"Enter a number: "; cin>>n;
//     if(n%2 != 0){
//         cout<<n<<" is odd number.";
//     }
//     else{
//         cout<<n<<" is even number.";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter a number: "; cin>>n;
    if(!(n%2 == 0)){
        cout<<n<<" is odd number.";
    }
    else{
        cout<<n<<" is even number.";
    }
    return 0;
}