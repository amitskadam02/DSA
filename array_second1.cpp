
// To find unique element in array

#include <iostream>

using namespace std;

int findunique(int arr[], int n) {

  int answer = 0;
  for (int i = 0; i < n; i++) {

    answer = answer ^ arr[i];
  }

  return answer;
}

int main() {

  int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 5};
  int n = 9;

  int answer = findunique(arr, n);

  cout << "Unique number is :" << answer << endl;
}