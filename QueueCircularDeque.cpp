// 641. Design Circular Deque
class MyCircularDeque {
    int *arr;
    int size;
    int front;
    int rear;

public:
    MyCircularDeque(int k) {
        size = k;
        front = rear = -1;
        arr = new int[size];
        
    }
    
    bool insertFront(int value) {
        if(isFull()){
            return false;
        }
        else if(front == -1 && rear == -1){ // empty case
            front++;
            rear++;
            arr[front] = value;
        }
        else if(front == 0 && rear != size-1){ // circular case
            front = size -1;
            arr[front] = value;
        }
        else{// normal case
            front--;
            arr[front] = value;   
        }
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull()){return false;}
        else if(front == -1 && rear == -1){
            // empty case
            front++;
            rear++;
            arr[rear] = value;
        }
        else if(rear == size-1 && front != 0){
            // circular case
            rear = 0;
            arr[rear] = value;
        }
        else{ 
            // normal case
            rear++;
            arr[rear] = value;
        }
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()){return false;}
        else if(front == rear){
            front = -1;
            rear = -1;
            // 1 element
        }
        else if(front == size-1){ // you forgot about this
            // circular case
            front = 0;
        }
        else{
            // normal case
            front++;
        }
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()){return false;}
        else if(front == rear){
            // 1 element
            front = rear = -1;
        }
        else if(rear == 0){
            // circular case
            rear = size -1;
        }
        else{
            // normal case
            rear--;
        }
        return true;
        
    }
    
    int getFront() {
        if(isEmpty()){return -1;}
        else{ return arr[front];}
    }
    
    int getRear() {
        if(isEmpty()){return -1;}
        else{ return arr[rear];}
    }
    
    bool isEmpty() {
        return front == -1 && rear == -1;
    }
    
    bool isFull() {
        return (front == 0 && rear == size-1) || (rear == front -1);
        
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */