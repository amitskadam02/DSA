
// Find odd occurance using binary search

#include <iostream>

using namespace std;

int findoddoccuringno(int arr[], int n) {
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;

  while (s <= e) {
    if (s == e) {
      return s;
    }

    if (mid & 1) { // even odd find
      // odd no
      if (arr[mid] == arr[mid - 1] && mid - 1 >= 0) {
        // go right
        s = mid + 1;

      } else {
        // go left
        e = mid - 1;
      }

    } else // even
    {
      if (arr[mid] == arr[mid + 1] && mid + 1 < n) {
        // go right
        s = mid + 2;
      } else {
        // either I am standing on right part
        //  or I am standing ans
        // go left
        e = mid; // Don't want lose ans
      }
    }
    mid = s + (e - s) / 2;
  }
  return -1;
}

int main() {

  int arr[] = {1, 1, 2, 2, 3, 3, 5, 5, 11, 6, 6, 7, 7, 8, 8};
  int n = 15;

  int ans = findoddoccuringno(arr, n);
  cout << "Final Answer is :" << arr[ans] << endl; // returning index
  ;

  return -1;
}