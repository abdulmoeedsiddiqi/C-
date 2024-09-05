#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    bool checked[10]={false};
    int count;
    cout<<"Enter 10 elements:\n";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        if(!checked[i]){
            count=1;
            for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                count++;
                checked[j]=true;
            }
        }
        cout<<arr[i]<<" is "<<count<<" times in the array. "<<endl;
                    
        }
    }
    return 0;
}