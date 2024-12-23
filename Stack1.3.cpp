#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int> &st, int &pos, int &ans){
  // base case
  if(pos == 1){
    ans = st.top();
    return;
  }
  // 1 case I will solve
  pos--;
  int temp = st.pop();
  st.pop();
  // recursion call
  solve(st, pos, ans);
  // backtracking
  st.push(temp)
}

int getMiddleElement(stack<int> &st){
  int size = st.size();
  if(st.empty()){
    cout<<"Stack is empty:"<<endl;
  }
  else(!st.empty()){
    // stack is not empty
    // odd
    int pos = 0;
    if(size & 1){
      pos = size/2 + 1;
    }
    else{
      // even
      pos = size/2;
    }

    int ans = -1;
    solve(st, pos, ans);
    return ans;

  }
}

int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  
  int mid = getMiddleElement(st);
  cout<<"middle element:"<<mid<<endl;

  return 0;
}