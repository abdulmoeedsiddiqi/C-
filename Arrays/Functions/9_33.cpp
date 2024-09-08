#include<iostream>
using namespace std;
func()
{
int arr[5], size,  sum=0;
char character;
cout<<"Enter values: ";

for(int i=0; i <5 ; i++)
{
cin>>arr[i];
}

cout<<"Enter the size of the array: ";
cin>>size;

cout<<"Enter a character(+ or -): ";
cin>>character;

if(character=='+'){
    for(int i=0; i<5; i++){
        if(arr[i] > 0){
            sum+=arr[i];
        }
    }
}
else if(character=='-')
{
    for(int i=0; i<5; i++){
        if(arr[i]<0){
            sum+=arr[i];
        }
}

}
else{
    cout<<"Entered wrong character. ";
}
cout<<"sum: "<<sum<<endl;
}

int main()
{
    func();
    return 0;
}