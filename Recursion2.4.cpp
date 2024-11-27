#include <iostream>

using namespace std;

// prit digit of number using recursion.
void printDigit(int num) {
  // base case
  if (num == 0) {
    return;
  }

  // processing
  int digit = num % 10;
  num = num / 10;

  // recursive call
  printDigit(num);

  // processing
  cout << digit << " ";
}
int main() {
  int num = 4321;

  printDigit(num);

  return 0;
}