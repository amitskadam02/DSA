// Convert string to upper case
// Replace ''@'' with ' ' (space)
// Check for Palindrom

#include <iostream>
#include <string.h>

using namespace std;

// finfd length
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

void convertToUpperCase(char ch[], int n) {
  int index = 0;

  while (ch[index] != '\0') {
    char currentCharacter = ch[index];
    // if lower case , convert to upper case
    if (currentCharacter >= 'a' && currentCharacter <= 'z') {
      ch[index] = currentCharacter - 'a' + 'A';
    }
    index++;
  }
}

void replaceCharacter(char ch[], int n) {
  int index = 0;

  //
  while (ch[index] != '\0') {
    if (ch[index] == '@') {
      ch[index] = ' ';
    }
    index++;
  }
}

bool checkPalindrom(char ch[], int n) {
  // n is length of string
  int i = 0;
  int j = n - 1;

  while (i <= j) {
    if (ch[i] != ch[j]) {
      return false;
      cout << "Not a Palindrom" << endl;
    } else {
      cout << "Palindrom" << endl;
      i++;
      j--;
    }
  }
  return true;
}

int main() {

  char ch[100];

  cin.getline(ch, 100);

  int len = findLength(ch, 100);
  // cout << "Before Upper case conversion: " << ch << endl;
  // convertToUpperCase(ch, 100);
  // cout << "After Upper case conversion: " << ch << endl;

  // cout << "Before replacing: " << ch << endl;
  // replaceCharacter(ch, 100);
  // cout << "After replacing: " << ch << endl;

  int value = checkPalindrom(ch, len);

  if (value == true) {
    cout << "Palindrom: " << ch << endl;
  } else {
    cout << "Not a palindrom: " << ch << endl;
  }

  return 0;
}