// Convert string to upper case

#includde<iostream>
#include<string.h>

using namespace std;

void convertToUpperCase(char ch[], int n) {
  int index = 0;

  while (ch[index] != '\0') {
    char currentCharacter = ch[index];
    // if lower case , convert to upper case
    if (currentCharacter >= 'a' && currentChracter <= 'z') {
      ch[index] = currentCharacter - 'a' + 'A';
    }
    index++;
  }
}

int main(){

  char ch[100];

  cin.getline(ch);

  convertToUpperCase(ch, 100);

  cout<<"After Upper case conversion:"<<ch<<endl;
  return 0;
}