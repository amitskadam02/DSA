
#include <iostream>

using namespace std;

// int incrementN(int n){
//     n++;

//     return n;
// }

// Call by reference
// int incrementN(int &k){ // here we are using reference value (here k means n
// only from main function, we just created alias)
//     k++;

//     return k;
// }

// int main(){

//     int n;
//     cin>>n;

//     incrementN(n);
//     cout<<n;

//     return 0;
// }

// Call by value
int incrementN(int k) { //(here k is diffrent from main functions n )
  k++;

  return k;
}

int main() {

  int n;
  cin >> n;

  n = incrementN(n);
  cout << n;

  return 0;
}