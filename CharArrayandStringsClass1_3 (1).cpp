
//
#include <iostream>

using namespace std;

int findLength(char ch[], int size) {

  //
  int length = 0;

  for (int i = 0; i < size; i++) {
    if (ch[i] == '\0') {
      break;
    } else {
      length++;
    }
  }

  return length;
}

void reverseSting(char ch[], int len) {
    int i=0;
    int j =len;
  while (i > j) {
    swap(ch[i], ch[j]);
    i++;
    j--;
  }
}



int main() {

  // creation
  char ch[10];

  cout << "Enter your string:" << endl;

  //   input
  //   cin>>ch; // string
  cin.getline(ch, 100); // sentence

  int len = findLength(ch, 100);
  cout << "Lenth of string is:" << len << endl;

  cout << "Befor:" << ch << endl;
  reverseSting(ch, len);
  cout << "After:" <<ch << endl;
  ;
}