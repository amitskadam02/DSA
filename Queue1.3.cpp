//Deque in STL
#include<iostream>
#include<deque>

using namespace std;

int main(){
    // creation of dequeue: Doubly ended queue
    deque<int>dq;
    
    dq.push_back(10);
    dq.push_front(10);
    cout<<dq.size()<<endl;
    
    // pop
    dq.pop_back();
    dq.pop_front();
    cout<<dq.size()<<endl;
    
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    
    cout<<dq.size()<<endl;
    
}