//
#include <iostream>
#include <vector>

using namespace std;

// store even number in vector ans from arr[]
void solve(int arr[], int size, int index, vector<int> &ans) {
  // Base condition
  if (index >= size) {
    return;
  }
  // Processing
  if (arr[index] % 2 == 0) {
    ans.push_back(arr[index]);
  }
  // rr
  solve(arr, size, index + 1, ans);
}

int main() {
  int arr[5] = {11, 20, 31, 40, 51};
  int size = 5;
  int index = 0;

  vector<int> ans;

  solve(arr, size, index, ans);

  for (int count : ans) {
    cout << count << " ";
  }
  return 0;
}