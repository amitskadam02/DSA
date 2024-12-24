// Insert element at Bottom of the stack
#include<iostream>
#include<stack>

using namespace std;

void insertATBottom(stack<int> &st, int element){
  // base case
  if(st.empty()){
    st.push(element);
    return;
  }
  //process: 1 case
  int temp = st.top();
  st.pop();
  // recursion
  insertATBottom(st, element);
  // backtracking
  st.push(temp);
}

int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  int element = 400;

  insertATBottom(st,element);

  while(!st.empty())
  {
    cout<<st.top()<<" ";
    st.pop();
  }
  return 0;
}