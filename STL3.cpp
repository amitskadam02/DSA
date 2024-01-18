

// Push and Pop in Vector
#include <iostream>
#include <vector>

using namespace std;

void printv(vector<int> d) {

  cout << "Printing Vector: " << endl;
  int size = d.size();
  for (int i = 0; i < size; i++) {
    // cout<<d[i]<<" ";
    cout << d.at(i) << " ";
  }
  cout << endl << endl;
}

void print2(vector<int> d) {
  cout << "Printing vector by vector method:" << endl;
  for (auto value : d) {
    cout << value << " ";
  }
  cout << endl;
}

int main() {

  vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  printv(v);
  print2(v);

  // vector<char>v;
  // v.push_back('a');
  // v.push_back('b');
  // v.push_back('c');

  // cout<<"Front element:"<<v[0]<<endl;
  // cout<<"Front element:"<<v.front()<<endl;
  // cout<<"Last element:"<<v[v.size()-1]<<endl;
  // cout<<"Last element:"<<v.back()<<endl;

  // //Vector initilization
  // vector<int>arr; // default
  // vector<int>arr2(5,-1);
  // // printv(arr2);
  // vector<int>arr3 = {1,2,3,4,5};
  // // printv(arr3);
  // vector<int>arr4 {1,2,3,4,5};
  // // printv(arr4);

  // // How to copy Vector
  // vector<int>arr5 {10,20,30,40,50};
  // vector<int>arr6(arr5);
  // printv(arr6);

  // vector<int>v;

  // // while(1){
  // //     int d;
  // //     cin>>d;

  // //     v.push_back(d);
  // //     cout<<"Capacity: "<<v.capacity()<<" Size: "<<v.size()<<endl;
  // // }

  // // v.push_back(10);
  // // v.push_back(20);
  // // v.push_back(30);

  // // printv(v);

  // // v.pop_back();
  // // printv(v);

  // // v.pop_back();
  // // printv(v);

  // // v.pop_back();
  // // printv(v);

  // // v.pop_back();

  // int n;
  // cin>>n;

  // for(int i=0;i<n;i++){
  //     int d;
  //     cin>>d;
  //     v.push_back(d);
  // }

  // // for(int i=0;i<10;i++){
  // //     v.push_back(90);
  // // }

  // // Pop entire vector

  // printv(v);
  // v.clear();
  // printv(v);

  // v.push_back(70);
  // printv(v);
  return 0;
}