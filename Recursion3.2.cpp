#include<iostream>
using namespace std;

//subsequence in string
void findSubsequence(string str, string output, int index)
{
  // base case
  if(index >= str.length())
  {
    // we build the output in output
    cout<<"--> "<<output<<endl;
    return;
  }
  
  // //**************************************************
  // // Solution1: Considering exclude first
  // // exclude
  // findSubsequence(str, output, index+1);

  // // include
  // output.push_back(str[index]);
  // findSubsequence(str, output, index+1);
  // //**************************************************

  //**************************************************
  // Solution2: Considering Include first
  // include
  output.push_back(str[index]);
  findSubsequence(str, output, index+1);

  // include
  output.pop_back();
  findSubsequence(str, output, index+1);
  //**************************************************

}

int main()
{
  string str = "abc";
  string output = "";
  int index = 0;

  findSubsequence(str, output, index);

  return 0;
}