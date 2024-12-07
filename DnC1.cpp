#include <iostream>
using namespace std;


void merge(int arr[], int s, int e)
{
  int mid = s+(e-s)/2;
  int lengthLeft = mid -s + 1;
  int lengthRight = e-mid;

  // createa rray left and right
  int *left = new int[lengthLeft];
  int *right = new int[lengthRight];

  // copy arra from original array to left array
  // staring index in left array in original array
  int k = s;
  for (int i = 0; i<lengthLeft; i++)
  {
    left[i] = arr[k];
    k++;
  }

  // copy array from original array to right array
  // staring index in right array in original array
  int k = mid+1;
  for (int i = 0; i<lengthRight; i++)
  {
    left[i] = arr[k];
    k++;
  }

  // Actual merege logic here
  // left array is sorted
  // right array is sorted
  int leftIndex = 0;
  int rightIndex = 0;

  // here I will make misrake
  int mainArrayIndex = s;
  while(leftIndex <lengthLeft && rightIndex <lengthRight )
  {
    if(left[leftIndex] < right[rightIndex])
    {
      arr[mainArrayIndex] = left[leftIndex];
      mainArrayIndex++;
      leftIndex++;
    }
    else
    {
      arr[mainArrayIndex] = right[rightIndex];
      mainArrayIndex++;
      rightIndex++;
    }
  }

  // two more cases for merge two sorted array
  // case1: left array exhaust but not right array
  while(rightIndex < lengthRight)
  {
    arr[mainArrayIndex] = right[rightIndex];
    mainArrayIndex++;
    rightIndex++;
  }
  // case2: right array exhaust but not left array
  while(leftIndex < lengthLeft)
  {
    arr[mainArrayIndex] = left[leftIndex];
    mainArrayIndex++;
    leftIndex++;
  }

}
void mergeSort(int arr[], int s, int e)
{
  // base case
  if(s>=e)
  {
    return;
  }

  int mid = s+(s-e)/2;
  // resurion call for left array : s-> mid:left array
  mergeSort(arr[], s, mid);
  // resurion call for right array : mid+1->e: right   
  mergeSort(arr[], mid+1, e);

  // merge two sorted array
  merge(arr[], s, e);

}
int main()
{
  int arr[] = {1,50,80,32,45,62,75};
  int size = 7;
  int s = 0;
  int e = size-1

  cout<<"Before merge sort:"<<endl;
  for(int i=0; i<size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  mergeSort(arr, s, e);
  cout<<"After merge sort:"<<endl;

  return 0;
}