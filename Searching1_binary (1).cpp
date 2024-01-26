

// Binary search

#include <iostream>

using namespace std;

int searchtarget(int arr[], int n, int target) {

  int start = 0;
  int end = n;
  int mid = (start + end) / 2;

  while (start <= end) {
    // mid
    if (arr[mid] == target) {
      return mid; //
    } else if (target > arr[mid]) {
      start = mid + 1;
    } else if (target < arr[mid]) {
      end = mid - 1;
    }
    mid = (start + end) / 2; // here I wiil make mistake
  }
  return -1;
}

int main() {

  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
  int target = 80;
  int n = 8;

  int ans = searchtarget(arr, n, target);

  if (ans == -1) {
    cout << "Not found";
  } else {
    cout << "found";
  }
}
