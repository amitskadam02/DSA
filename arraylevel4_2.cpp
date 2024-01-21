

// Leetcode Probem 1

#include <algorithm>
#include <iostream>
#include <limits.h>

using namespace std;

void sortarray(int arr[], int size) {
  int left = 0;
  int right = size - 1;
  int j;
  int index = 0;

  // for(int index = 0; index<size; index++){
  while (index <= right) { // Important
    if (arr[index] == 0) {
      swap(arr[index], arr[left]);
      left++;
      index++;
    } else if (arr[index] == 2) {
      swap(arr[index], arr[right]);
      right--;
      // No need of to increase index
    } else {
      // Do nothing
      index++;
    }
  }
}

void printarray(int arr[], int size) {
  cout << "Printing an array:";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int arr[] = {2, 0, 1, 1, 0, 2, 0, 1, 0, 1, 0};
  int size = 11;

  sortarray(arr, size);
  printarray(arr, size);
}