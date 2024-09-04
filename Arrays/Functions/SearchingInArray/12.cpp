//Binary Search
#include<iostream>
using namespace std;

int binary(int *arr, int size, int num){
    int low = 0, high = size;
    while(low <= high){
        int mid = (low + high) / 2;
        if(mid == num){
            return mid;
        }
        else if(num > mid){
            low = mid + 1;
        }
        else if(num < mid){
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << binary(arr, 5, 1);
    return 0;
}