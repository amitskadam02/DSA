
//

#include <iostream>

using namespace std;

void printarray(int arr[]), int size {

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << arr[i] << arr[j] << endl;
    }
  }
}

int main() {

  int arr[] = {10, 20, 30};
  int size = 3;

  printarray(arr, size);

  return 0;
}