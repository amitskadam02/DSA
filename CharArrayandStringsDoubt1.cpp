// sqrt with precision
#include <iostream>
#include <string.h>

using namespace std;

int mySqrt(int n) {
  int s = 0;
  int e = n;
  int mid = s + (e - s) / 2;
  int ans = -1;

  while (s <= e) {
    if (mid * mid <= n) {
      ans = mid;
      s = mid + 1;
    } else {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }

  return ans;
}

double myPrecisionSqrt(int n) {
  double sqrt = mySqrt(n);

  double step = 0.1;
  int precision = 5;
  for (int i = 0; i < precision; i++) {
    double j = sqrt;
    while (j * j <= n) {
      sqrt = j;
      j += step;
    }
    step = step / 10;
  }
  return sqrt;
}

int main() {

  int n = 51;
  double sqrt = myPrecisionSqrt(n);
  cout << sqrt << endl;

  return 0;
}
