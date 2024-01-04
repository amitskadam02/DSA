
#include <iostream>
using namespace std;
int main() {
  // outer loop
  for (int row = 0; row < 5; row = row + 1) {
    // print 4 star
    for (int col = 0; col < 5; col = col + 1) {
      // if row0 or row4 print *
      if (row == 0 || row == 4) {
        cout << "*";
      } else {
        if (col == 0 || col == 4) {
          cout << "*";
        } else {
          cout << " ";
        }
      }
    }
    cout << endl;
  }
}