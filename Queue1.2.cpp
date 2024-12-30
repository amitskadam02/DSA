// Queue implementaion from scratch!
#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    
    // ctor
    Queue(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }
    
    // push
    void push(int val){
        // overflow
        if(rear == size-1){
            cout<<"Overflow: Queue is full"<<endl;
        }
        else if (rear == -1 && front == -1){
            // Queue is empty
            // First element
            front++;
            rear++;
            arr[rear] = val;
        }
        else{
            // Nomal case
            rear++; // made mistake here as arr[rear]++
            arr[rear] = val;
        }
    }
    
    // pop
    void pop(){
        // Underflow
        if(front == -1 && rear == -1){
            cout<<"Underflow: Queue is empty"<<endl;
        }
        else if(front == rear){
            // one element is present
            arr[rear] = -1;
            rear = -1;
            front = -1;
        }
        else{
            // normal case
            arr[front] = -1; // made mistake here
            front++; // made mistake here rear--;
        }
    }
    
    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }
        else{
            return false;
        }
    }
    
    int getSize(){
        if(front == -1 && rear == -1){
            return 0;
        }
        else{
            //cout<<"Size of queue:";
            return rear-front+1;
        }
        
    }
    
    int getFront(){
        // underflow
        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
    
    // int getRaer(){
    //     // HW
    // }
    
    void print(){ // Not able to print first time.
        cout<<"Queue is:";
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
};
int main(){
    // craete Queue
    Queue q(5);
    q.print();
    
    // push
    q.push(10);
    q.print();
        q.push(20);
    q.print();
        q.push(30);
    q.print();
        q.push(40);
    q.print();
        q.push(50);
    q.print();
    
    // size
    cout<<"Size of queue is: "<<q.getSize()<<endl;
    cout<<endl;
    
    // pop
    q.pop();
    q.print();
        q.pop();
    q.print();
        q.pop();
    q.print();
        q.pop();
    q.print();
        q.pop();
    q.print();
        q.pop();
    q.print();
    
    // size
    cout<<"Size of queue is: "<<q.getSize()<<endl;
    cout<<"Check for Queue is empty or not:"<<q.isEmpty()<<endl;
    cout<<endl;
    
    q.push(100);
    q.print();
    cout<<"front is :"<<q.getFront()<<endl;
    
    return 0;
}