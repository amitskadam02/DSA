// STL

#include <iostream>

using namespace std;

void fun(int arr[], int n) {

  for (int i = 0; i < n; i++) {

    cout << arr[i] << " ";
  }
}

int main() {

  // int arr[] = {1,2,3,4};
  // int n=4;

  // Dynamic array
  int n;
  cin >> n;
  int *arr = new int[n];

  fun(arr, n);
}