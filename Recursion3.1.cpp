// Recursion 3.1
// check array is sorted or not

#include <iostream>
using namespace std;

bool checkSorted(int arr[], int size, int index) {
  // base case
  if (index >= size) {
    return true;
  }

  // proseccisng
  if (arr[index] > arr[index - 1]) {
    return checkSorted(arr, size, index + 1);
  } else {
    return false;
  }
}
int main() {
  int arr[] = {10, 20, 60, 50, 60, 70};
  int size = 6;
  int index = 1;

  checkSorted(arr, size, index);

  if (checkSorted(arr, size, index)) {
    cout << "Sorted" << endl;
  } else {
    cout << "Not Sorted" << endl;
  }
  return 0;
}