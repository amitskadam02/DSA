#include<iostream>

class Node{
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        this->next = NUll;
    }
};

class Stack{
    Node* head;
    Stack(){
        this->head = NULL;
    }
    
    void push(int data){
        // create
        Node* newNode = new Node(data);
        // link
        newNode->next = head;
        // update
        head = newnode;
    }
    
    void pop(){
        // underfolw
        head == NULL
        Node* temp = head;
        head = head->next;
    }
};
int main(){
    
}