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

// Insert at Sorted array:
void insertAtSortedStack(stack<int> &st, int element){
  // base case
  if(st.empty() || element > st.top()){
    st.push(element);
    return;
  }
  // processing:1 case
  int temp = st.top();
  st.pop();
  // recursion
  insertAtSortedStack(st,element);
  // backtracking
  st.push(temp);
}

// sort a Stack
void sortStack(stack<int> &st){
  // base case
  if(st.empty()){
    //st.push(temp);
    return;
  }
  // process: 1 case
  int temp = st.top();
  st.pop();
  // recursion
  sortStack(st);
  // backtracking
  insertAtSortedStack(st, temp); // important
}

int main(){
  stack<int> st;
  st.push(10);
  st.push(56);
  st.push(30);
  st.push(98);
  st.push(22);
  
  // int element = 22;
  // insertAtSortedStack(st, element);
  sortStack(st);

  cout<<"after sorted:"<<endl;
  while(!st.empty())
  {
    cout<<st.top()<<" ";
    st.pop();
  }
  return 0;
}