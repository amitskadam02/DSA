
// Array first class- Basics
#include <iostream>

using namespace std;

void printarray(int arr[], int size) {

  for (int i = 0; i < size; i++) {

    cout << arr[i] << " ";
  }
  cout << endl;
}

bool linearsearch(int arr[], int size, int target) {

  int flag = 0;
  for (int i = 0; i < size; i++) {

    if (arr[i] == target) {
      return true;
      // flag=1;
      // break;
    }
  }

  // Target not found
  return false;
  // if(flag==1){
  //     cout<<"Target found";
  // }
  // else{
  //     cout<<"NOt found";
  // }

  // return flag;
}

int main() {

  int arr[5] = {2, 4, 6, 8, 10};
  int size = 5;
  int target = 10;

  printarray(arr, size);
  linearsearch(arr, size, target);

  bool answer = linearsearch(arr, size, target);

  cout << answer << " is Answer" << endl;

  if (answer == 1) {

    cout << "Target found" << endl;
  } else {

    cout << "Target not found" << endl;
  }

  // array creation

  //   int arr[100];
  //   // char ch[56];
  //   // bool flags[23];
  //   // short sum[100];

  //   // cout<<"Array created";

  //   int a = 5;

  //   cout << "Adress of A :" << &a << endl;
  //   cout << "Base address of array :" << &arr << endl;
  //   cout << "Base address of array :" << arr << endl;

  //   cout << "size of a:" << sizeof(a) << endl;
  //   cout << "Size of arr:" << sizeof(arr) << endl;

  // int arr[]  = {10,20,30,40,50};
  // int brr[5] = {1,2,3,4,5};
  // int crr[5] = {100,200};
  // int drr[2] = {21,22,23,24};// error

  // int arr[5]= {2,5,6,8,9};

  // cout<<arr[0]<<endl;
  // cout<<arr[1]<<endl;
  // cout<<arr[2]<<endl;
  // cout<<arr[3]<<endl;
  // cout<<arr[4]<<endl;
  // cout<<endl;

  // for(int i=0;i<5;i++){

  //     cout<<arr[i]<<" ";
  // }

  // int arr[5];
  // int n=5;

  // // taking input in array
  // for(int i=0;i<n;i++){l

  //     cout<<"Enter the value for index:"<<i<<" ";
  //     cin>>arr[i];
  // }

  // // printing an array
  // for(int i=0;i<n;i++){

  //     cout<<arr[i]<<endl;
  // }

  // int arr[10];

  // int n=10;

  // // input
  // for(int i=0;i<n;i++){

  //     cin>>arr[i];
  // }

  // int sum =0;
  // for(int i=0;i<n;i++){

  //     sum=sum+arr[i];
  // }

  // // double up and print
  // for(int i=0;i<n;i++){

  //     cout<<arr[i]*2<<endl;

  // }
  // cout<<sum;

  // int arr[6]={2,4,6,8,10,12};

  // int n=6;
  // int target =11;
  // bool flag =0;

  // for(int i=0; i<n;i++){

  //     if(arr[i]== target){
  //         flag = 1;
  //         break; //no need to check after this
  //     }
  // }

  // if(flag==1){

  //     cout<<"Target found";
  // }
  // else{

  //     cout<<"Target not found";
  // }
}