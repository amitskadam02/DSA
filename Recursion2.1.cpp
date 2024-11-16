// climbStairs
#include <iostream>

using namespace std;

int climbStairs(int n) {
  // base condition
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  // recursive call
  int ans = climbStairs(n - 1) + climbStairs(n - 2);
  // ans
  return ans;
}
int main() {

  cout << climbStairs(10) << endl;
  return 0;
}