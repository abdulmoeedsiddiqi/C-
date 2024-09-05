#include<iostream>
using namespace std;
int main()
{
    int arr[3][7][4];
    int max,min,avg,sum=0;

    cout<<"Enter temperatures of the months:\n";

for(int i=0; i<3; i++){
    for(int j=0; j<7; j++){
        for(int k=0; k<4; k++){
            cin>>arr[i][j][k];
        }
    }
}
 min=max=arr[0][0][0];
for(int i=0; i<3; i++){
    for(int j=0; j<7; j++){
        for(int k=0; k<4; k++){
            sum+=arr[i][j][k];
            if(arr[i][j][k]>max){
                max=arr[i][j][k];
            }
            if(arr[i][j][k]<min){
                min=arr[i][j][k];
            }
        }
    }
}
   avg=sum/28;
cout<<"Maximum: "<<max<<endl;
cout<<"Minimum: "<<min<<endl;
cout<<"Average: "<<avg<<endl;

    return 0;
}