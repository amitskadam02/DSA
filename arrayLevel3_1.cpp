
// Array level-3

#include <iostream>
#include <limits.h>

using namespace std;

void printarray(int arr[][4], int row, int col) {
  cout << "Printing array:" << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

bool findtarget(int arr[][4], int row, int col, int target) {
  cout << "Finding target: " << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (arr[i][j] == target) {
        return true;
      }
    }
  }
  return false;
}

int main() {

  // // Array declaration
  // // Column sixe is must in 2D array
  // int arr1[3][4];
  // int arr2[][4];
  // // int arr3[3][]; // Not valid
  // // int arr4[][]; // Not valid

  int arr[3][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
  };
  int row = 3;
  int col = 4;
  // int arr[3][4];

  // // Taking input from user
  // for(int i=0;i<row;i++){
  //     for(int j=0;j<col;j++){
  //         cin>>arr[i][j];
  //     }
  // }
  int target = 11;

  printarray(arr, row, col);
  findtarget(arr, row, col, target);
}