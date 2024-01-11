#include <iostream>

using namespace std;

int main() {

  // array creation

  int arr[100];
  // char ch[56];
  // bool flags[23];
  // short sum[100];

  // cout<<"Array created";

  int a = 5;

  cout << "Adress of A :" << &a << endl;
  cout << "Base address of array :" << &arr << endl;
  cout << "Base address of array :" << arr << endl;

  cout << "size of a:" << sizeof(a) << endl;
  cout << "Size of arr:" << sizeof(arr) << endl;
}