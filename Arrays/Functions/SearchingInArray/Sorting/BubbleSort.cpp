// // Bubble sort in C++

// #include <iostream>
// using namespace std;

// // perform bubble sort
// void bubbleSort(int array[], int size) {

//   // loop to access each array element
//   for (int step = 0; step < size -1; ++step) {
      
//     // loop to compare array elements
//     for (int i = 0; i < size - step - 1; ++i) {

//       // compare two adjacent elements
//       // change > to < to sort in descending order
//       if (array[i] > array[i + 1]) {

//         // swapping elements if elements
//         // are not in the intended order
//         int temp = array[i];
//         array[i] = array[i + 1];
//         array[i + 1] = temp;
//       }
//     }
//   }
// }

// // print array
// void printArray(int array[], int size) {
//   for (int i = 0; i < size; ++i) {
//     cout << "  " << array[i];
//   }
//   cout << "\n";
// }

// int main() {
//   int data[] = {-2, 45, 0, 11, -9};
  
//   // find array's length
//   int size = sizeof(data) / sizeof(data[0]);
  
//   bubbleSort(data, size);
  
//   cout << "Sorted Array in Ascending Order:\n";  
//   printArray(data, size);
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int temp,i;
//     int arr[5]={6,5,4,3,2};
//     for( i=0;i<4;i++){
//     if(arr[i+1]<arr[i]){   //1
//         temp=arr[i+1];
//         arr[i+1]=arr[i];
//         arr[i]=temp;
//     }
//     }
//     cout<<endl;
//     for(int i=0; i<5; i++){  
//         cout<<arr[i]<<" ";
//     }


//     cout<<endl;
//         for( i=0;i<4;i++){
    
//     if(arr[i+1]<arr[i]){ //2
//         temp=arr[i+1];
//         arr[i+1]=arr[i];
//         arr[i]=temp;
//     }
//     }
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }
//    cout<<endl;
//         for( i=0;i<4;i++){
    
//     if(arr[i+1]<arr[i]){  //3
//         temp=arr[i+1];
//         arr[i+1]=arr[i];
//         arr[i]=temp;
//     }
//     }
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }

//     cout<<endl;
//         for( i=0;i<4;i++){
    
//     if(arr[i+1]<arr[i]){  //4
//         temp=arr[i+1];
//         arr[i+1]=arr[i];
//         arr[i]=temp;
//     }
//     }
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
         int temp;
    int arr[5];
    cout<<"Enter an array of 5\n";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    for(int i=0;i<4;i++){
        for(int i=0;i<4;i++){
 if(arr[i+1]<arr[i]){
    int temp;
    temp=arr[i+1];
    arr[i+1]=arr[i];
    arr[i]=temp;
 }
        }
 }
 cout<<"Now"<<endl;
 for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
 }
    return 0;
}