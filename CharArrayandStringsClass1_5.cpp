// Strings

#include <iostream>
#include <string.h>

using namespace std;

int main() {

  // string name;
  // string temp = "";
  // cin>>name;
  // cout<<"Legth of string: "<<name.length()<<endl;
  // cout<<"String is empty or not: "<<temp.empty()<<endl;
  // cout<<"at 0 index:"<<name.at(0)<<endl;
  // name.front();
  // name.back();

  string name1 = "Amit";
  string name2 = "Kadam";

  cout << "Before:" << endl;
  cout << "name1:" << name1 << endl;
  cout << "name2:" << name2 << endl;

  name1.append(name2);

  cout << "After:" << endl;
  cout << "name1:" << name1 << endl;
  cout << "name2:" << name2 << endl;

  //   // creation
  //   string name;

  //   //input
  //   cin>>name;

  //   //output
  //   cout<<"Printing the name: "<<name<<endl;

  //   int index = 0;

  //   //usinf for loop
  //   while(name[index] != '\0')
  //   {
  //       cout<<"index:"<<index<<" name:"<<name[index]<<endl;
  //       index++;
  //   }

  return 0;
}