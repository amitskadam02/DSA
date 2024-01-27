

// Binary search 2: Find first occurance of no.

#include <iostream>

using namespace std;

// int searchtarget(int arr[], int n, int target){

//     int start = 0;
//     int end =n;
//     int mid =(start+end)/2;

//     while(start<=end){
//         //mid
//         if(arr[mid]==target){
//             return mid; //
//         }
//         else if(target>arr[mid]){
//             start = mid+1;
//         }
//         else if(target<arr[mid]){
//             end = mid -1;
//         }
//         mid= (start+end)/2;//here I wiil make mistake
//     }
//     return -1;
// }/

int findfirstoccurance(int arr[], int n, int target) {
  int s = 0;
  int e = n - 1;
  int mid = (s + e) / 2;
  int ans = -1;

  while (s <= e) {
    if (arr[mid] == target) {
      // store
      ans = mid;
      // go left
      e = mid - 1;
    } else if (target > arr[mid]) {
      s = mid + 1;
    } else if (target < arr[mid]) {
      e = mid - 1;
    }
    // important step
    mid = (s + e) / 2;
  }
  return ans;
}

int findlastoccuerance(int arr[], int n, int target) {
  int s = 0;
  int e = n - 1;
  int mid = (s + e) / 2;
  int ans = -1;

  while (s <= e) {
    if (target == arr[mid]) {
      // store
      ans = mid;
      // go right
      s = mid + 1;
    } else if (target < arr[mid]) {
      e = mid - 1;
    } else if (target > arr[mid]) {
      s = mid - 1;
    }
    // important steps
    mid = (s + e) / 2;
  }
  return ans;
}

int totaloccurance(int arr[], int n, int target) {
  int lastoccurance = findlastoccuerance(arr, n, target);
  int firstoccurance = findfirstoccurance(arr, n, target);
  int total = lastoccurance - firstoccurance + 1;
  return total;
}

int main() {

  int arr[] = {10, 20, 30, 30, 30, 30, 30, 80, 90};
  int target = 30;
  int n = 8;

  int ans = totaloccurance(arr, n, target);

  cout << "Total occurance is:" << ans << endl;

  // if(ans==-1){
  //     cout<<"Not found";
  // }
  // else{
  //     cout<<"found at index :"<<ans<<endl;
  // }
}
