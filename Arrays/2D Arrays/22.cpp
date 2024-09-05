#include<iostream>
using namespace std;
int main()
{
    int arr[5][5]=
    {
        {1,1,1,1,1},
        {2,2,2,2,2},
        {3,3,3,3,3},
        {4,4,4,4,4},
        {5,5,5,5,5}
    };
    int sumRows[5]={0};
    int sumCols[5]={0};
    int sumDia=0;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sumRows[i]+=arr[i][j];
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sumCols[i]+=arr[j][i];
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0;j<5;j++){
            if(i==j){
            sumDia+=arr[i][j];
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<"Sum of row "<<i+1<<" is "<<sumRows[i]<<endl;
    }
    cout<<endl<<endl;
    
    for(int i=0;i<5;i++){
        cout<<"Sum of Columns "<<i+1<<" is "<<sumCols[i]<<endl;
    }
    cout<<endl<<"Sum of diagonal is "<<sumDia<<endl;

    return 0;
}