// find pivot index

int findpivotindex(arr[], n) {
  int s = 0, e = n - 1, mid = s + (e - s) / 2;

  while (s <= e) {
    if (s == e)
      return;
    if (arr[mid] < arr[mid - 1])
      return mid - 1;
    if (arr[mid] > arr[mid + 1])
      return mid;
    if (arr[s] > arr[mid])
      e = mid - 1;
    else
      s = mid + 1;
    mid = (s + e) / 2;
  }
  return -1;
}