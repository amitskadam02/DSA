#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &v) {
  int n = v.size();
  for (int i = 0; i < n; i++) {
    cout << v[i] << endl;
  }
  cout << endl;
}

bool mycomp(int &a, int &b) {
  //   return a < b; // increasing order
  return a > b; // decreasing order order
}

int main() {

  vector<int> v = {44, 55, 33, 22, 11};
  sort(v.begin(), v.end(), mycomp);
  print(v);

  return 0;
}