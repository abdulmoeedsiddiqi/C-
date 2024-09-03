#include<iostream>
using namespace std;
int main()
{
    int flag=0;
    int arr[150] , n;
    cout<<"Enter the number of persons required: ";
    cin>>n;
    for(int i=0 ; i<n; i++){
        cin>>arr[i];
        if(arr[i]<50 && arr[i]>40){
         flag++;   
        }
    }
    cout<<"Number of persons with height between 40 and 50: "<<flag;

    
   
    return 0;
}