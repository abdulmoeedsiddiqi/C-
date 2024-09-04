// #include<iostream>
// using namespace std;
// int binarySearch(int arr[], int n, int key){
//     int s=0;
//     int e=n;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return -1;   
// }
// int main()
// {
//     int n ;
//     cout<<"Enter number of elements: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0 ; i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cout<<"Enter the element to found: ";
//     cin>>key;
//     cout<<binarySearch(arr,n,key)<<endl;
//     return 0;
// }



#include<iostream>
using namespace std;
int calclateBinarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(e<=n){
        int mid=(e+n)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements:\n";
    for(int i=0; i <n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the number to search: ";
    cin>>key;
    int result;
     result=calclateBinarySearch(arr,n,key);
     if(result == -1){
        cout<<"Element not found.\n";
     }
     else{
        cout<<"Element found at index "<<result<<endl;
     }
    return 0;
}