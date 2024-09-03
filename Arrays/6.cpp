#include<iostream>
using namespace std;
int main()
{
    const int size =5; 
    int index[size] , square[size] , cube[size], sum[size];
    cout<<"Enter five numbers: ";
    for(int i=0 ; i<size ; i++){
        cin>>index[i];
    }
        for(int i=0 ; i<size ; i++){
        square[i]=index[i] * index[i];
        cube[i]=index[i] * index[i] * index[i];
        sum[i]=index[i]+square[i]+cube[i];
    }
    
    cout<<"Numbers are \n";
for(int i=0 ; i<size ; i++){
    cout<<index[i]<<"  ";
    }
    cout<<"\nSquare of numbers are \n";
    for(int i=0 ; i<size ; i++){
        cout<<square[i]<<"  ";
        }
        cout<<"\nCube of numbers are \n";
        for(int i=0 ; i<size ; i++){
            cout<<cube[i]<<"  ";
            }
            int total=0;
        cout<<"\n Sums are \n";
        for(int i=0 ; i<size ; i++){
            cout<<sum[i]<<"  ";
            total+=sum[i];
            }
cout<<"\nGrand Total is "<<total;

    return 0;
}