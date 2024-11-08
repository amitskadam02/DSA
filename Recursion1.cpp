#include <iostream>

using namespace std;

int printfact(int n) {
  // base condition
  if (n == 0 || n == 1) {
    return 1;
  }
  // recursion
  int finalans = n * printfact(n - 1);

  return finalans;
}

int main() { cout << printfact(5) << endl; }