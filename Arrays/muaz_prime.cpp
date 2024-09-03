#include <iostream>
using namespace std;

bool primenumberchecker(int n){
	
	if(n<=1){
		return false;
	}
	
	for(int i=2; i <= n/2; i++){
		
		if(n % i == 0){
			return false;
		}
	}
	
	return true;
}

int main(){
	
	int arr[10];
	
	//input 
	for(int i=0; i < 10; i++){
		cout << "Enter " << i+1 << " element: "; 
		cin >> arr[i];
	}
	
	cout << endl;
	
	//prime numbers check
	for(int i=0; i < 10; i++){
			
		if(primenumberchecker(arr[i])){
			cout << arr[i] << " ";
		}
			
	}
	
	
	return 0;
}