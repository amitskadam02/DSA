// divide using binary search

#include <iostream>
using namespace std;

int findQuotient(int divisor, int dividend) {
  int s = 0;
  int e = dividend;
  int mid = s + (e - s) / 2;
  int ans = -1;

  while (s <= e) {

    if (mid * divisor == dividend) {
      return mid;
    }
    if (mid * divisor < dividend) {
      // store the anser
      ans = mid;
      // go right
      s = mid + 1;
    } else {
      // go left
      e = mid - 1;
    }
    // I will forgot this
    mid = s + (e - s) / 2;
  }
  return ans;
}

int main() {

  int divisor = 7;
  int dividend = 29;

  // int n =-5;
  // cout<<abs(n)<<endl;
  int ans = findQuotient(abs(divisor), abs(dividend)); // remove negative sign

  if ((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0)) {
    ans = 0 - ans;
  }

  cout << "Final answer is: " << ans << endl;

  cout << "WTF" << endl;
}