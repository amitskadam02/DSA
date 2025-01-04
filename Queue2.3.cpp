// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
#include<queue>

using namespace std;

void InterleaveQueue(queue<int>&first){
    queue<int>second;
    int size = first.size();
    
    // break queue into two parts
    for(int i = 0; i<size/2 ; i++){
        int temp = first.front();
        first.pop();
        second.push(temp);
    }
    
    // merge two queue
    for(int i = 0; i<size/2; i++){
        // second queue to first queue
        int temp = second.front();
        second.pop();
        first.push(temp);
        
        // pop from queue first and push to quque first
        temp = first.front();
        first.pop();
        first.push(temp);
    }
}
int main(){
    queue<int>first;
    
    first.push(10);
    first.push(20);
    first.push(30);
    first.push(40);
    first.push(50);
    first.push(60);
    
    // print
    InterleaveQueue(first);
    while(!first.empty()){
        int temp = first.front();
        first.pop();
        cout<<temp<<" ";
    }
    
}