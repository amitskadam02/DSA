#include <iostream>

using namespace std;

// Call by value
// void solve(int *p) { p = p + 1; }

// Call by reference
void solve(int *&p) { p = p + 1; }

int main() {
  int a = 10;
  int *p = &a;

  // before
  cout << p << endl;
  cout << &p << endl;
  cout << *p << endl;

  solve(p);

  // after
  cout << p << endl;
  cout << &p << endl;
  cout << *p << endl;
}