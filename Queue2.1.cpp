// Reverse queue using stack
#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void reverseQueue(queue<int>&q){
    // insert into stack
    stack<int>s;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    // insert into queue
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
    reverseQueue(q);
    
    while(!q.empty()){
        int element = q.front();
        q.pop();
        cout<<element<<" ";
    }
    return 0;
}