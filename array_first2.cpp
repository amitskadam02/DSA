
#include <iostream>
#include <limits.h>

using namespace std;

/*void countZeroOne(int arr[], int size)
{
    int onecount=0;
    int zerocount=0;

    for(int i=0;i<size;i++){

        if(arr[i]==1){
            onecount++;
        }
        else{
            zerocount++;
        }
    }

    cout<<"Zerocount:"<<zerocount<<endl;
    cout<<"one count:"<<onecount<<endl;
}*/

int findminNumber(int arr[], int size) {

  int minNumber = INT_MAX;

  for (int i = 0; i < size; i++) {
    if (arr[i] < minNumber) {

      minNumber = arr[i];
    }
  }

  return minNumber;
}

int main() {

  // int arr[] = {0,0,0,1,1,0,1,1};
  // // zero =4
  // // one =4
  // int size=8;

  // cout<<INT_MIN<<endl;
  // cout<<INT_MAX<<endl;

  // countZeroOne(arr,size);

  int arr[] = {45, 13, 56, 28, 56, 89, 20};
  int size = 7;

  int min = findminNumber(arr, size);
  cout << "Hola min is :" << min << endl;

  return 0;
}