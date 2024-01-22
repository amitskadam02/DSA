

// Leetcode Probem 2

#include <algorithm>
#include <iostream>
#include <limits.h>

using namespace std;

vector<int> rowandmaximumone(vector<vector<int>> &mat) {
  vector<int> ans;
  int n = mat.size();

  int mincount = INT_MIN;

  int rowno;

  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < mat[i].size(); j++) {
      if (mat[i][j] == 10) {
        count++;
      }
    }
  }

  if (count > onecount) {
    onecount = count;
    rowno = 1;
  }

  int main() {
    vector<int> arr{10, 20, 30, 40, 50, 60};
    int size = 6;
    int k = 3;

    sortarray(arr, size, k);
    printarray(arr, size);
  }