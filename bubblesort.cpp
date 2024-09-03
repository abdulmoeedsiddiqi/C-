#include<iostream>
using namespace std;
int main()
{
    int temp=0;
    int arr[5]={9,4,3,5,7};
    for(int i=0 ; i<5; i++){
        for(int j=i+1; j<=5; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
for(int i=0 ; i<5 ; i++){
            cout<<arr[i]<<" ";
        }
    return 0;
}