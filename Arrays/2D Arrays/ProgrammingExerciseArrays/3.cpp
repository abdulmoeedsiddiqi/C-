#include<iostream>
using namespace std;
int main()
{
    int num[10], squares[10], cubes[10], total=0, sumNum=0, sumSqr=0, sumCubes=0;
    for(int i=0;i<10;i++){
        num[i]=i;
        sumNum+=num[i];

    }
    for(int i=0;i<10;i++)
    {
        squares[i]=i*i;
        sumSqr+=squares[i];   
    }
    for(int i=0;i<10;i++)
    {
        cubes[i]=i*i*i;
        sumCubes+=cubes[i];
    }
    total=sumNum+sumSqr+sumCubes;
    cout<<"Sum of numbers: "<<sumNum<<endl;
    cout<<"Sum of squares: "<<sumSqr<<endl;
    cout<<"Sum of cubes: "<<sumCubes<<endl;
    cout<<"Total: "<<total;

    return 0;
}