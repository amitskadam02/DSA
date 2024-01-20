

// Array

#include <iostream>
#include <limits.h>
// #include<>

using namespace std;

void arragearray(int arr[], int size) {
  int j = 0;
  for (int index = 0; index < size; index++) {
    if (arr[index] < 0) {
      swap(arr[index], arr[j]);
      j++;
    }
  }
}

int main() {

  int arr[] = {23, -7, 12, -10, -11, 40, 60};
  int size = 7;

  arragearray(arr, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}