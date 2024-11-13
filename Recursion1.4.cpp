
// Sum of n numbers.
#include <iostream>

using namespace std;

int sum(int n) {
  // BC
  if (n == 0)
    return 0;
  // recursive call
  int ans = n + sum(n - 1);

  return ans;
}
int main() {
  cout << sum(4) << endl;

  return 0;
}