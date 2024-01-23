// Rotate array by 90 degree

#include <iostream>
#include <vector>

void reversevector(vector<int> &arr) {
  int n = arr.size();
  int start = 0;
  int end = n - 1;

  while (start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

void rotate(vector<vector<int>> &matrix) {
  int n = matrix.size();

  // transpose
  for (int i = 0; i < n; i++) {
    for (int j = i; j < matrix[i].size(); j++) {
      swap(matrix[i][j], matrix[j][i]);
    }
  }

  // Reverse
  //  for(int n=0;i<n;i++){
  //      reverse(matrix[i].begin(),matrix[i].end());
  reversevector(matrix);
}
}
using namespace std;

int main() {
  cout << "Hello World";

  return 0;
}