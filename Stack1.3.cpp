// Findout middle element in Stack(checked on compiler)
#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int> &st, int &pos, int &ans){
  // base case
  if(pos == 1){
    ans = st.top();
    return ;
  }
  // 1 case I will solve
  pos--;
  int temp = st.top();
  st.pop();
  // recursion
  solve(st, pos, ans);
  // backtrack
  st.push(temp);

}

int getMiddleElement(stack<int> &st){
  int size = st.size();
  if(st.empty()){
    cout<<"Stack is empty"<<endl;
    return -1; 
  }
  else{
    // stack in not empty
    int pos = 0;
    if(size & 1){
      // odd
      pos = size/2 +1;
    }
    else{
      // even
      pos = size/2;
    } 
    int ans = -1;
    solve(st,pos, ans);
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
  st.push(60);

  int mid = getMiddleElement(st);
  cout<<"Middle element is:"<<mid<<endl;


}