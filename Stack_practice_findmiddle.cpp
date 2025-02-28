// find middle element
#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &st, int &mid, int &ans){
    if(mid == 1){
        ans = st.top();
      return ;  
    }
    mid--;
    int temp = st.top();
    st.pop();
    solve(st,mid,ans);
    st.push(temp);
}

int findmiddle(stack<int>&st){
    int size= st.size();
    int mid;
    //
    // if(isEmpty()){
    //      return -1;
    // }
    // else{
        if(size & 1){
            // odd
            mid = size/2 + 1;
        }
        else{
            // even
            mid = size/2;
        }
    // }
    int ans = -1;
    solve(st, mid, ans);
    return ans;
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<findmiddle(st);
    
}