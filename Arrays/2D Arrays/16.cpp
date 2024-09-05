#include<iostream>
using namespace std;
int main()
{
    int tArr[2][3]={
        {1,2,3},
        {11,22,33}
    };
    for(int i=0;i<2; i++){
        for(int j=0;j<3;j++){
            cout<<tArr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}