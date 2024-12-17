#include <iostream>
using namespace std;

class Node {
        public:
        int data;
        Node* next;

        Node() {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
        }


};

//I want to insert a node right at the head of Linked List
void insertAtHead(Node* &head, Node* &tail, int data) {
        //check for Empty LL
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
        }
        else {
                //step1:
                Node* newNode = new Node(data);
                //step2:
                newNode -> next = head;
                //step3:
                head = newNode;
        }


}
//I want to insert a node right at the end of LINKED LIST
void insertAtTail(Node* &head,Node* &tail, int data) {
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
                
        }
        else {
            //step1: creatae a node
            Node* newNode = new Node(data);
            //step2: connect woth tail ndoe
            tail->next = newNode;
            //step3: update tail;
            tail = newNode;
        }

}
void print(Node* head) {

        Node* temp = head;
        while(temp != NULL) {
                cout << temp->data << "->";
                temp = temp->next;
        }
}

int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail) {
        int len = findLength(head);
        
        if(position == 1) {
                insertAtHead(head, tail , data);
                return;
        }
        else if(position > len) {
                insertAtTail(head, tail, data);
                return;
        }
        else {
            Node* newNode = new Node(data);
            
            Node* prev = NULL;
            Node* curr = head;
            while(position != 1) {
                position--;
                prev = curr;
                curr = curr->next;
            }
            
            //step3:
            newNode -> next = curr;

            //step4:
            prev -> next = newNode;
            
        }
        
}

void deleteNode(Node* head, Node* tail, int position)
{
  // case 1: LinkedList is empty
  if(head == NULL)
  {
    cout<<"LinkedList is Empty cannot delete"<<endl;
    return;
  }

  int length = findLength(head);

  if(head == tail)
  {
    // for single element
    Node* temp = head;
    delete temp;
    head = NULL;
    tail = NULL;
    return;
  }

  // case2: LL is not empty
  if(position == 1)
  {
    // Delete from Head
    // step1:
    Node* temp = head;
    // step2: make head or temp point to next node
    head = head->next;
    // head = temp->next;
    // step3: make temp to point NULL
    temp->next = NULL;
    // step4: delete temp
    delete temp;
  }
  else if(position == length)
  {
    // Datele from Tail
    // step1: create temp and assign to tail
    Node* prev = head;
    // step2: travese to second last node
    while(position != 1)
    {
      position --;
      prev = prev->next;
    }
    // step3: make prev->next NULL
    prev->next = NULL;
    // step3: delete tail
    delete tail;
    // step4: update tail
    tail = prev;
  }
  else
  {
    // Detele from middle
    // step1:craete prev and curr
    Node* prev = NULL;
    Node* curr = head;
    // travese
    while(position != 1)
    {
      position --;
      prev = curr;
      curr = curr->next;
    }
    // assign prev to cuur next 
    prev = curr->next;
    // delete curr
    delete curr;
  }

}



int main() {

        Node* head = NULL;
        Node* tail = NULL;
        insertAtTail(head, tail, 10);
        insertAtTail(head, tail, 20);
        insertAtTail(head, tail, 30);
        insertAtTail(head, tail, 40);
        insertAtTail(head, tail, 50);

        print(head);
        cout << endl;

        deleteNode(head,tail,1);
        print(head);
        cout << endl;

        return 0;
}
