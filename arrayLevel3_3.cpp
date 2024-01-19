
// Array level-3

#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

// void printarray(int arr[][4], int row, int col) {
//   cout << "Printing array:" << endl;
//   for (int i = 0; i < row; i++) {
//     for (int j = 0; j < col; j++) {
//       cout << arr[i][j] << " ";
//     }
//     cout << endl;
//   }
// }

// bool findtarget(int arr[][4], int row, int col, int target) {
//   cout << "Finding target: " << endl;
//   for (int i = 0; i < row; i++) {
//     for (int j = 0; j < col; j++) {
//       if (arr[i][j] == target) {
//         return true;
//       }
//     }
//   }
//   return false;
// }

// int findsmallest(int arr[][4], int row, int col) {
//   cout << "Finding smallest:" << endl;
//   int smallest = INT_MAX;
//   for (int i = 0; i < row; i++) {
//     for (int j = 0; j < col; j++) {
//       if (arr[i][j] < smallest) {
//         smallest = arr[i][j];
//       }
//     }
//   }
//   return smallest;
// }

// int findlargest(int arr[][4], int row, int col) {
//   cout << "Finding Largest:" << endl;
//   int largest = INT_MIN;
//   for (int i = 0; i < row; i++) {
//     for (int j = 0; j < col; j++) {
//       if (arr[i][j] > largest) {
//         largest = arr[i][j];
//       }
//     }
//   }
//   return largest;
// }

// // row wise sum
// void printsumofrowinarray(int arr[][4], int row, int col){
//     cout<<"Printing sum of rows:"<<endl;

//     for(int i=0;i<row;i++){
//         int sum=0;
//         for(int j=0;j<col;j++){
//             sum = sum+arr[i][j];
//         }
//         cout<<"Sum of row is: "<<sum<<endl;
//     }
// }

// //column wise sum
// void printcolsuminarray(int arr[][4], int row, int col){
//     for(int i=0;i<col;i++){
//         int sum=0;
//         for(int j=0;j<row;j++){
//             sum= sum+arr[j][i];
//         }
//         cout<<"Sum of column is:"<<sum<<endl;
//     }
// }

// // Diagonal sum
// void printdiagonalsuminarray(int arr[][4], int row, int col){
//     int sum=0;
//     for(int i=0;i<row;i++){
//         // int sum=0;
//         for(int j=0;j<col;j++){
//             if(i==j){
//             sum= sum+arr[i][j];
//             }
//         }
//         // cout<<"Sum of column is:"<<sum<<endl;
//     }
//     cout<<"Diagonal sum is: "<<sum;
// }
// void dsum(int arr[][4], int row, int col){
//     int sum = 0;
//     for(int i=0;i<row;i++){
//         sum=sum+arr[i][i];
//     }
//     cout<<sum;
// }

// void transpose(int arr[][4],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=i;j<col;j++)
//         {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }
// }

int main() {

  // // Array declaration
  // // Column sixe is must in 2D array
  // int arr1[3][4];
  // int arr2[][4];
  // // int arr3[3][]; // Not valid f
  // // int arr4[][]; // Not valid

  //   int arr[4][4] = {
  //                     {1, 2, 3, 4},
  //                     {5, 6, 7, 8},
  //                     {9, 10, 11, 12},
  //                     {10,20,30,40}
  //                 };

  //   int row = 4;
  //   int col = 4;

  //     printarray(arr, row, col);
  //   transpose(arr,row,col);

  //   printsumofrowinarray(arr, row, col);

  //   printcolsuminarray(arr,row,col);

  //   printdiagonalsuminarray(arr, row, col);

  //   dsum(arr, row, col);
  // int arr[3][4];

  // // Taking input from user
  // for(int i=0;i<row;i++){
  //     for(int j=0;j<col;j++){
  //         cin>>arr[i][j];
  //     }
  // }
  //   int target = 110;

  //   printarray(arr, row, col);

  //   cout<<"Found or not: "<<findtarget(arr, row, col, target)<<endl;

  //   cout<<"Smallest no.: "<<findsmallest(arr, row, col)<<endl;

  //   cout<<"Largest no.: "<<findlargest(arr, row, col)<<endl;

  //   findsmallest(arr, row, col);

  //   findlargest(arr, row, col);

  //   Vector:::::::::
  //  vector<int>arr;
  // row size->arr.size()
  //  vector<vector<int> > arr(5, vector<int>(10,-1)); // important
  //  for(int i=0;i<arr.size();i++){
  //      for(int j=0;j<arr[i].size();j++){
  //          cout<<arr[i][j]<<" ";
  //      }
  //      cout<<endl;
  //  }

  // Jagged array
  vector<vector<int>> brr;

  vector<int> vec1(10, 0);
  vector<int> vec2(5, 1);
  vector<int> vec3(15, 1);
  vector<int> vec4(8, 0);
  vector<int> vec5(14, 0);

  brr.push_back(vec1);
  brr.push_back(vec2);
  brr.push_back(vec3);
  brr.push_back(vec4);
  brr.push_back(vec5);

  // print
  for (int i = 0; i < brr.size(); i++) {
    for (int j = 0; j < brr[i].size(); j++) {
      cout << brr[i][j] << " ";
    }
    cout << endl;
  }
}
