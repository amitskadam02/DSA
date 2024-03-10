#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// void print(vector<int> &v) {
//   int n = v.size();
//   for (int i = 0; i < n; i++) {
//     cout << v[i] << endl;
//   }
//   cout << endl;
// }

void printvv(vector<vector<int>> &v) {
  for (int i = 0; i < v.size(); i++) {
    vector<int> &temp = v[i];
    int a = temp[0];
    int b = temp[1];
    cout << a << " " << b << endl;
  }
  cout << endl;
}

bool myComaparatorIndex(vector<int> &a, vector<int> &b) { return a[1] < b[1]; }

// bool mycomp(int &a, int &b) {
//   //   return a < b; // increasing order
//   return a > b; // decreasing order order
// }

int main() {

  // vector<int> v = {44, 55, 33, 22, 11};
  // sort(v.begin(), v.end(), mycomp);

  // vector of vector sorting
  vector<vector<int>> v;

  cout << "Enter the number of rows: ";
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int a, b;
    cout << "Enter a,b:";
    cin >> a >> b;
    vector<int> temp;
    temp.push_back(a);
    temp.push_back(b);
    v.push_back(temp);
  }

  cout << "vector of vector is:" << endl;
  printvv(v);
  sort(v.begin(), v.end(), myComaparatorIndex);
  cout << "after sorting by 1st elemenet" << endl;
  printvv(v);
  // print(v);

  return 0;
}