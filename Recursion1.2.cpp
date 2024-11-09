#include <iostream>

using namespace std;

int pow(int n) {
  // base condition
  if (n == 0) {
    return 1;
  }
  // recuursive call
  int ans = 2 * pow(n - 1);

  // ans
  return ans;
}

int main() {

  cout << pow(10) << endl;

  return 0;
}