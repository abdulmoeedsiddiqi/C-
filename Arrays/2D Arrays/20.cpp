#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={
        {4,18,-16,11},
        {-5,10,-2,12},
        {15,-3,17,18}
    };
int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] > 0)
            {
                sum+=arr[i][j];
            }
        }
    }
    cout<<"Sum="<<sum;
    return 0;
}