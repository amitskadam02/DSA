
// no. of set bit
#include <iostream>

using namespace std;

int countsetbit(int n) {

  int count = 0;

  while (n > 0) {

    n = n & (n - 1);
    count++;
  }

  return count;
}

int main() {

  int n;
  cin >> n;

  int sb = countsetbit(n);
  cout << "No.of set bit :" << sb << endl;
}
