
//
#include <iostream>

using namespace std;

int main() {

  // creation
  char ch[10];

  // input
  // cin>>ch;
  cin.getline(ch, 100); // sentence as a input(space, tab, enter)
  /////

  // output
  cout << "Printing the value: " << ch << endl;
}