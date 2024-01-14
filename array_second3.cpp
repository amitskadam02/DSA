#include <iostream>

using namespace std;

void sortZeroOne(int arr[], int size) {

  int zerocount = 0;
  int onecount = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] == 0) {
      zerocount++;
    }
    if (arr[i] == 1) {
      onecount++;
    }
  }

  // Place all zeroes first
  for (int i = 0; i < zerocount; i++) {
    arr[i] = 0;
  }

  // Place all ones after zeroes
  for (int i = zerocount; i < size; i++) {
    arr[i] = 1;
  }
}

int main() {

  int arr[] = {0, 1, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0};
  int size = 14;

  sortZeroOne(arr, size);

  // print an array
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}