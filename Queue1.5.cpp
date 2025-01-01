// Double ended circular queue:
#include<iostream>

using namespace std;

class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rare;
    
    Deque(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rare = -1;
        }
        
    // push
    // push back
    void pushBack(int val){
        // overflow
        // empty:
        // circular nature
        // normal
        if(front == 0 && rare == size-1){
            cout<<"Overflow"<<endl;
        }
        else if(front == -1 && rare == -1){
            front++;
            rare++;
            arr[rare] = val;
        }else if(rare == size-1 && front != 0){
            rare = 0;
            arr[rare] = val;
        }
        else{
            rare++;
            arr[rare] = val;
        }
    }
    // push front
    void pushFront(int val){
        // overflow
        // empty:
        // circular nature
        // normal
        if(front == 0 && rare == size-1){
            cout<<"Overflow"<<endl;
        }
        else if(front == -1 && rare == -1){
            front++;
            rare++;
            arr[front] = val;
        }
        else if(front == 0 && rare != size-1){
            front = size-1;
            arr[front] = val;
        }
        else{
            front--;
            arr[front] = val;
        }
    }
    
    // pop
    // pop front
    void popFront(){
        // Underflow
        // 1 element
        // circular nature
        // normal
        if(front == -1 && rare == -1){
            cout<<"underflow:"<<endl;
        }
        else if(front == rare){
            arr[front] =-1;
            front = -1;
            rare = -1;
        }
        else if(front == 0 && rare != size-1){
            arr[front] = -1;
            front = size-1;
        }
        else{
            arr[front] = -1;
            front++;
        }
    }
    // pop back
    void popBack(){
        // Underflow
        // 1 element
        // circular nature
        // normal
        if(front == -1 && rare == -1){
            cout<<"Underflow:"<<endl;
        }
        else if(front == rare){
            arr[rare] = -1;
            front = -1;
            rare = -1;
        }
        else if(rare == 0){
            arr[rare] = -1;
            rare = size-1;
        }
        else{
            arr[rare] = -1;
            rare--;
        }
    }
};
int main(){
    Deque q(5);
    q.pushBack(100);
    
    return 0;
}