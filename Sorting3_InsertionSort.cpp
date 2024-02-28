#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &v) {
  int n = v.size();
  for (int i = 0; i < n; i++) {
    cout << v[i] << " " << endl;
  }
  cout << endl;
}

// void selectionSort(vector<int> &v) {
//   int n = v.size();

//   for (int i = 0; i < n; i++) {
//     int minIndex = i;
//     for (int j = i + 1; j < n; j++) {
//       if (v[j] < v[minIndex]) {
//         minIndex = j;
//       }
//     }

//     swap(v[i], v[minIndex]);
//   }
// }

void insertionSort(vector<int> &v) {
  int n = v.size();

  for (int i = 1; i < n; i++) {
    int key = v[i];
    int j = i - 1;
    while (j >= 0 && v[j] > key) {
      v[j + 1] = v[j];
      j--;
    }
    v[j + 1] = key; // insertion
  }
}

int main() {

  vector<int> v = {40, 20, 50, 70, 60, 10};

  // selectionSort(v);
  insertionSort(v);
  print(v);

  return 0;
}