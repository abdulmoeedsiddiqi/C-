// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={1,2,5,7,9};
//     int n,  index= -1, i;
//     cout<<"Enter value to search: ";
//      cin>>n;

//     for(i=0; i<5; i++)
//     {
//      if(arr[i] == n)
//       {
//         cout<<"Yes! this value exist in the array, it is "<<i+1<<" element of the array."<<endl;
//         index = 1;
//         break;
//       }
//     }

//     if(index == -1){
//         cout << "Not exist";
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
int main()
{
    int arr[5], n, check=-1 ;
    cout<<"Enter five values:\n";
    for(int i=0 ; i <5 ; i++){
        cin>>arr[i];
    }

    cout<<"Enter value to find: ";
    cin>>n;

    for(int i=0 ; i <5 ; i++){
    if(n == arr[i]){
        cout<<"Yes! this value exist in the array, it is "<<i+1<<" element ";
        check=1;   
        break;
     }

    }

    if(check == -1){
        cout<<"Element not exists. ";
    }
    
    
    return 0;
}