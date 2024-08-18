#include<iostream>
using namespace std;
int main()
{

    int n;
    for(int i=0; i<5; i++){
    cout<<"Enter a number: "; 
    cin>>n;
   if(n<0)
    continue;
   cout<<"You entered: "<<n<<endl;
    }

    return 0;
}