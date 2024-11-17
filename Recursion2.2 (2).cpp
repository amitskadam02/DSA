#include <iostream>
#include <limits.h>

using namespace std;

// print array
void printArray(int arr[], int size, int index) {
  // bc
  if (index >= size) {
    return;
  }
  // processing
  cout << arr[index] << " ";
  // recursive call
  printArray(arr, size, index + 1);
}

// search in array
int searchArray(int arr[], int size, int target, int index) {
  // bc
  if (index >= size) {
    return false;
  }
  if (arr[index] == target) {
    return true;
  }
  //
  int aagekanas = searchArray(arr, size, target, index + 1);
  return aagekanas;
}

// find min in array
void findMin(int arr [], int size, int index, int &mini)
{
  //bc
  if(index >= size)
  {
    return ;
  }
  //processing
  mini = min (arr[index], mini);
  //rc
  findMin(arr,size,index+1,mini);
}

int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int size = 5;
  int index = 0;
  int mini = INT_MAX;

  findMin(arr,size,index,mini);
  cout<<"Minimum no. in array is: "<<mini;
  // int target = 50;
  // cout << "Target found or not: " << searchArray(arr, size, target, index)
  //      << endl;
  // printArray(arr, size, index);
}