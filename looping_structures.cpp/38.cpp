#include<iostream>
using namespace std;
int main()
{
    int n=11,check;
  do{
     check=0;
    for(int i=2 ; i<n ; i++){
        if(n%i == 0){
            check=1;
            break;
        }
    }


    if(check){
        cout<<n<<" is not a prime number. "<<endl;
    }
    else{
        cout<<n<<" is prime number. "<<endl;
    }
    n++;
  }while(n<=25);
    
    return 0;
}