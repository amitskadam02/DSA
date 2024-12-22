#include<iostream>

using namespace std;

// class
class stack{
  public:
  
  int *arr;
  int size;
  int top;

  stack(int size){
    arr = new int(size);
    this->size = size;
    this->top = -1;

  }
  
  void push(int data)
  {
    if(top == size-1){
      cout<<"Stack overflow:"<<endl;
      return;
    }
    else{
      top++;
      arr[top] = data;
    }
  }

  void pop(){
    if(top == -1){
      cout<<"Stack underflow:"<<endl;
      return;
    }
    else{
      top--;
    }
  }

  bool isEmpty(){
    if(top == -1){
      return true;
    }
    else{
      return false;
    }
  }

  int getTop(){
    if(top == -1){
      cout<<" stack is empty "<<endl;
      return -1;
    }
    else
    {
    return arr[top];
    }
  }

  int getsize(){
    return top+1;
  }
  
  void print(){
    cout<<"top: "<<arr[top]<<endl;
    cout<<"top element:"<<getTop()<<endl;
    cout<<"Stack:";
    for(int i=0;i<getsize();i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
  }
};

int main(){
  // creation
  stack st(4);
  // push
  st.push(10);
  st.print();
  st.push(20);
  st.print();
  st.push(30);
  st.print();
  // pop
  st.pop();
  st.print();
  st.pop();
  st.print();
  st.pop();
  st.print();
  cout<<endl;

  cout<<"stack size:"<<st.getsize()<<endl;
  cout<<"stack top:"<<st.getTop()<<endl;

  if(st.isEmpty()){
    cout<<"stack is empty"<<endl;
  }
  else{
    cout<<"stack is NOT empty";
  }

  return 0;
}