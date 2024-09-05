#include<iostream>
using namespace std;
int main()
{
    int twoDimensionalArray[2][4];
    cout<<"Enter array values:\n";
    for(int i=0 ; i<2; i++){
        for(int j=0; j<4; j++){
            cin>>twoDimensionalArray[i][j];
        }
    }
    cout<<"Table is "<<endl;
        for(int i=0 ; i<2; i++){
        for(int j=0; j<4; j++){
            cout<<twoDimensionalArray[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}