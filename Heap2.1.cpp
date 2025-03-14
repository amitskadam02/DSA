// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>

int main() {
    std::priority_queue<int>pq;
    pq.push(10); //Insertion
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    
    std::cout<<"Top element in Heap:"<<pq.top()<<std::endl; //top element
    
    pq.pop(); // Deletion
    
    std::cout<<"Top element in Heap:"<<pq.top()<<std::endl; //top element
    
    if(pq.empty()){
        std::cout<<"Empty";
    }
    else{
        std::cout<<"Not Empty";
    }

    return 0;
}