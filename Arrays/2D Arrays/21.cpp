#include<iostream>
using namespace std;
int main()
{
    int arr1[2][3],arr2[2][3],arr3[2][3];
    cout<<"Enter the elements of first array:\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin>>arr1[i][j];
        }
    }
        cout<<"Now enter the elements of Second array:\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin>>arr2[i][j];
               
        }
    }

     for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
     arr3[i][j]=arr1[i][j]+arr2[i][j];          
        }
    }

    cout<<"The first matrix is:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"The Second matrix is:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    cout<<"The third matrix is:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}