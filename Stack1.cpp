// Stack in STL:

#include<iostream>
#include<stack>

using namespace std;

int main(){
  stack<int> st;
  
  // insertion
  st.push(10);
  st.push(20);
  st.push(30);

  // size
  cout<<"Size of stack is:"<<st.size()<<endl;;

  // deletion 
  st.pop();

  // empty or not
  if(st.empty()){
    cout<<"Stack is empty:"<<endl;
  }
  else{
    cout<<"Stack is Not empty"<<endl;
  }

  // top element
  cout<<"Top element is:"<<st.top()<<endl;


  return 0;
}