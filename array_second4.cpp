#include <iostream>

using namespace std;

void rotaterightbyone(int arr[], int size) {

  // setep1:
  int temp = arr[size - 1];

  // step 2:
  for (int i = size; i >= 1; i--) {
    arr[i] = arr[i - 1];
  }

  // step3:
  arr[0] = temp;
}

int main() {

  int arr[] = {10, 20, 30, 40};
  int size = 4;

  rotaterightbyone(arr, size);

  // print an array
  for (int i = 0; i < size; i++) {

    cout << arr[i] << " " << endl;
  }

  return 0;
}
