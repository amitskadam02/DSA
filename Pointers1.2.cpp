#include <iostream>

using namespace std;

int main() {

  // int a = 5;
  // cout << "value at a:" << a << endl;
  // cout << "address of a:" << &a << endl;

  // // poninter creation
  // int *ptr = &a;
  // // accesing value store at address store in ptr
  // cout << "value at a:" << *ptr << endl;
  // cout << ptr << endl;
  // cout << &ptr << endl;

  int *ptr; // bad practice
  cout << *ptr;

  int *ptr = 0; // good practice
}