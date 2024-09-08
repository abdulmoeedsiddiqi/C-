#include<iostream>
using namespace std;
show(){
    for(int i=0;i<10;i++){
        cout<<'*';
    }
}
show(int n){
  
    for(int i=0; i<n ; i++){
        cout<<'*';
    }
}
show(int n, char ch){
    for(int i=0;i<n;i++){
        cout<<ch;
    }
}
int main()
{
   show();
   cout<<"\n\n\n";
   show(3);
   cout<<"\n\n\n";
   show(10,'$'); 
    return 0;
}