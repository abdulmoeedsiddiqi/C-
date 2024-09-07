#include<iostream>
using namespace std;
void in(int arr[][2]){
    cout<<"Enter values of 3x2 array:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
}
int calculateMax(int arr[][2]){
   int max=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]> max){
                max=arr[i][j];
            }
        }
    }
    return max;
}

int main()
{
    int arr[3][2];
    in(arr);
    cout<<"The maximum value is "<<calculateMax(arr);
    return 0;
}