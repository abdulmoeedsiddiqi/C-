#include<iostream>
using namespace std;
int func(int arr[][2]){
int max=arr[0][0];
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        if(arr[i][j]>max){
            max = arr[i][j];
        }
    }
 }
 return max;

 
}
int main()
{
    int arr[3][2],_max;
    cout<<"Enter values in 3 by 2 array:\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    _max=func(arr);
    cout<<"Maximum value in array is "<<_max<<endl;
    return 0;
}
