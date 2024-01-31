
// Pivot Index in sorted and rotated array

#include <iostream>

using namespace std;

int pivotindex(int arr[], int n) {
  int s = 0, e = n - 1, mid = s + (e - s) / 2;

  while (s <= e) {
    // corner case
    if (s == e) {
      return s;
    }
    if (arr[mid] < arr[mid - 1]) {
      return mid - 1;
    } else if (arr[mid] > arr[mid + 1]) {
      return mid;
    } else if (arr[s] > arr[mid]) {
      e = mid + 1;
    } else {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return -1;
}

int main() {
  int arr[] = {12, 14, 16, 2, 4, 6, 8, 10};
  int n = 8;
  int pivoti = pivotindex(arr, n);

  cout << "Pivot index is:" << pivoti << endl;

  return 0;
}
