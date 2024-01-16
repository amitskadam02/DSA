

#include <iostream>
// #include <limits.h>
// #include <math.h>
#include <algorithm>

using namespace std;

void segragate(int arr[], int n) {

  int l = 0;
  int h = n - 1;

  if (arr[l] == 0) {
    l++;
  }
  if (arr[h] == 1) {
    h--;
  }
  swap(arr[l], arr[h]);
  l++;
  h--;

  for (int i = 0; i < n; i++) {

    cout << arr[i] << " ";
  }
}

int main() {

  int arr[] = {1, 0, 0, 0, 0, 1, 1, 1, 0, 1};
  int n = 10;

  segragate(arr, n);

  return 0;
}