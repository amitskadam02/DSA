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

// Reverse stack
void reverseStack(stack<int> &st){
  // base case
  if(st.empty()){
    return;
  }
  // process: 1 case I shall solve
  int temp = st.top();
  st.pop();
  // recursion
  reverseStack(st);
  // backtracking
  insertATBottom(st, temp);
}

int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  // int element = 400;
  // insertATBottom(st,element);

  // cout<<"before reverse:"<<endl;
  // while(!st.empty())
  // {
  //   cout<<st.top()<<" ";
  //   st.pop();
  // }
  // cout<<endl;

  reverseStack(st);

  cout<<"after reverse:"<<endl;
  while(!st.empty())
  {
    cout<<st.top()<<" ";
    st.pop();
  }
  return 0;
}