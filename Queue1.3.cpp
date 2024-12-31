// circular queue
#include<iostream>

using namespace std;

class Cqueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    
    // ctor
    Cqueue(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }
    
    // push
    void push(int val){
        // overflow
        // empty : first element
        // circular queue nature
        // normal
        if((front == 0 && rear == size-1) || (rear == front-1)){ // iss the second condition
            cout<<"Overflow"<<endl;
        }
        else if(front == -1 && rear == -1){ //not able to write thi contition
            rear++;
            front++;
            //front++;
            arr[rear] = val;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = val;
        }
        else{
            rear++;
            arr[rear] = val;
        }
    }
    
    // pop
    void pop(){
        // underflow
        // 1 element
        // circular nature element
        // normal
        if(front == -1 && rear == -1){
            cout<<"Underflow"<<endl;
        }
        else if(front == rear){ // people forget to write this condition
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
            // not able to think first time
            arr[front] = -1;
            front = 0;
        }
        else{
            arr[front] = -1;
            front++; 
        }
    }
    
    // size
    int getSize(){
        return rear-front+1;
    }
    // print
    void print(){
        cout<<"Printing Cqueue:";
        cout<<"front: "<<front<<" "<<"rear: "<<rear<<endl;
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
};
int main(){
    Cqueue q(5); // why it showing arr of 4 element only ?
    q.print();
    cout<<"Size of Cqueue is: "<<q.getSize()<<endl;
    // push
    q.push(10);
    q.print();
    
    // pop
    q.pop();
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
    cout<<"Size of Cqueue is: "<<q.getSize()<<endl;
    q.push(50);
    q.print();
    cout<<"Size of Cqueue is: "<<q.getSize()<<endl;
    q.push(1000);
    
    cout<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.print();
    
    q.push(100);
    q.print();
    q.push(200);
    q.print();
    q.push(300);
    q.print();
    q.push(400);
    q.print();



    return 0;
}