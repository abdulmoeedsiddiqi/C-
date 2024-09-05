#include<iostream>
using namespace std;
int main()
{
    int tArr[2][4]={
        {1,2,3,4},
        {5,6,7,8}
    };
int min,max;
max=tArr[0][0];
max=tArr[0][0];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++){
        if(tArr[i][j]>max){
            max=tArr[i][j];
        }
        if(tArr[i][j]<min){
            min=tArr[i][j];
        }
        
        }
    }

    cout<<"Maximum= "<<max<<endl<<"Minimum= "<<min<<endl;
    return 0;
}