#include<iostream>
#include<queue>

using namespace std;

int main(){
  // queue creation
  queue<int> q;

  // push
  q.push(100);

  // size
  cout<<"Size of queue:"<<q.size()<<endl;
  
  // empty
  if(!q.empty()){
      cout<<"Queue is not empty:"<<endl;
  }
  else{
      cout<<"Queue is empty:"<<endl;
  }
  
  // pop
  q.pop();
  
  // size
  cout<<"Size of queue:"<<q.size()<<endl;
  
  // empty
  if(!q.empty()){
      cout<<"Queue is not empty:"<<endl;
  }
  else{
      cout<<"Queue is empty:"<<endl;
  }
  
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  
  cout<<"Front element of queue: "<<q.front()<<endl;
  cout<<"Rear element of queue: "<<q.back()<<endl;
  

  return 0;
}