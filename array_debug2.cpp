// Debug 4:
void swapAlternate(int arr[], int size) {
  for (int i = 0; i < size - 1; i = i + 2) {
    // int temp = arr[i];
    // arr[i+1] = arr[i];
    // arr[i] = temp;

    /// mY logic
    int temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;
  }
}
// 5
int pairSumToX(int input[], int size, int x) {
  int pairs = 0;
  for (int i = 0; i < size; i++) {
    for (int j = i; j < size; j++) {
      if (input[i] + input[j] == x)
        pairs++;
    }
  }
  return pairs;
}

// solution
int pairSumToX(int input[], int size, int x) {
  int pairs = 0;
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (input[i] + input[j] == x)
        pairs++;
    }
  }
  return pairs;
}

/// 6.
int tripletSumToX(int input[], int size, int x) {
  int triplets = 0;
  for (int i = 0; i < size; i++) {
    for (int j = i; j < size; j++) {
      for (int k = j; k < size; k++) {
        if (input[i] + input[j] + input[k] == x)
          triplets++;
      }
    }
  }
  return triplets;
}
// solution
int tripletSumToX(int input[], int size, int x) {
  int triplets = 0;
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      for (int k = j + 1; k < size; k++) {
        if (input[i] + input[j] + input[k] == x)
          triplets++;
      }
    }
  }
  return triplets;
}

// 7.
void sort0sand1s(int input[], int size) {
  int nextZero = 0;
  for (int i = 0; i < size; i++) {
    if (input[nextZero] == 0) {
      int temp = input[nextZero];
      input[nextZero] = input[i];
      input[i] = temp;
    }
  }
}
// solution
void sort0and1s(int input[], int size) {
  int nextZero = 0;
  for (int i = 0; i < size; i++) {
    if (input[i] == 0) {
      int temp = input[nextZero];
      input[nextZero] = input[i];
      input[i] = temp;
      nextZero++;
    }
  }
}