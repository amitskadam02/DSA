int search(int arr[], int target) {
  int pivotindex = findpivotindex(nums);
  int n = arr.size();
  int ans = -1;
  // search in A
  if (target >= arr[0] && target <= arr[pivotindex]) {
    ans = binarysearch(nums, 0, pivotindex, target);
  } else {
    ans = binarysearch(nums, pivotindex + 1, n - 1, target);
  }
  return ans;
};