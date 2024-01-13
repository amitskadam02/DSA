
// Reverse an array

#include <iostream>

using namespace std;

// void reversearray(int arr[], int size){

//     // // Using while loop
//     // int left=0;
//     // int right =size-1;

//     // while(left<=right){

//     //     swap(arr[left],arr[right]);
//     //     left++;
//     //     right--;
//     // }

//     // using for loop
//     for(int left=0, right=size-1; left<=  right; left++,right--){

//         swap(arr[left],arr[right]);
//     }

//     for(int i=0;i<size;i++){

//         cout<<arr[i]<<" ";
//     }
// }

void extremeprint(int arr[], int size) {

  for (int left = 0, right = size - 1; left <= right; left++, right--) {

    if (left == right) {

      cout << arr[left] << " ";
    } else {

      cout << arr[left] << " " << endl;
      cout << arr[right] << " " << endl;
    }
  }
}

int main() {

  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
  int size = 8;

  // reversearray(arr,size);
  extremeprint(arr, size);
  return 0;
}