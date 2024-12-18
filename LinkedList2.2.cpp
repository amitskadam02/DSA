#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;
  Node* prev;

  // ctor
  Node()
  {
    this->prev = NULL;
    this->next = NULL;
  }
  // ctor with data
  Node(int _data)
  {
    this->data = _data;
    this->prev = NULL;
    this->next = NULL;

  }
};

// print LL
void printLL(Node* &head)
{
  Node* temp = head;
  //traverse
  while(temp != NULL)
  {
    cout<<temp->data<<"->";
    temp = temp->next;
  }

}

// lenght of LL
int findLength(Node* &head )
{
  Node* temp = head;
  int len = 0;
  while(temp != NULL)
  {
    len++;
    temp = temp->next;
  }

  return len;
}

void insertATHead(Node* &head, Node* &tail, int data)
{
  // if LL is Empty
  if(head == NULL)
  {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else
  {
    // LL is not empty
    Node* newNode = new Node(data);
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
  }
  
}

void insertAtTail(Node* &head, Node* &tail, int data)
{
  // IF LL is EMPTY
  if(head == NULL)
  {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else
  {
    // LL is not Empty
    Node* newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
 
}

void deleteNode(Node* &head, Node* &tail, int position)
{
  int len = findLength(head);
  // LL is EMPTY
  if(head == NULL)
  {
    cout<<"LL is empty: Cannot delete"<<endl;
    return;
  }

  if(head == tail)
  {
    Node* temp = head;
    delete temp;
    head = NULL;
    tail = NULL;
    return;
  }

    // LL is not empty
    if(position == 1)
    {
      // delete from Head
      Node* temp = head;
      head = head->next;
      temp->next = NULL;
      head->prev = NULL;
      delete temp;
    }
    else if(position == len)
    {
      // delete from tail
      Node *prevNode = tail->prev;
      prevNode->next = NULL;
      tail->prev     = NULL;
      delete tail;
      tail = prevNode;
    }
    else
    {
      // delete from middle
      // step1: set pointers: currNode, PrevNode, nextNode
      Node* prevNode = NULL;
      Node* currNode = head;
      while(position != 1)
      {
        position --;
        prevNode = currNode;
        currNode = currNode->next;
      }
      Node* nextNode = currNode->next;
      // step2:Update pointers
      prevNode->next = nextNode;
      nextNode->prev = prevNode;
      currNode->next = NULL;
      currNode->prev = NULL;
      delete currNode;
      
    }
}

int main()
{
  Node* head = NULL;
  Node* tail = NULL;

  insertATHead(head, tail, 40);
  insertATHead(head, tail, 30);
  insertATHead(head, tail, 20);
  insertATHead(head, tail, 10);

  cout<<"Before deletion:"<<endl;
  printLL(head);
  cout<<endl;

  // insertATHead(head, tail, 50);
  // printLL(head);
  // cout<<endl;

  // insertAtTail(head, tail, 1000);
  // printLL(head);
  // cout<<endl;

  deleteNode(head, tail, 1);
  cout<<"After deletion:"<<endl;
  printLL(head);
  cout<<endl;

  deleteNode(head, tail, 1);
  cout<<"After deletion:"<<endl;
  printLL(head);
  cout<<endl;

  deleteNode(head, tail, 1);
  cout<<"After deletion:"<<endl;
  printLL(head);
  cout<<endl;

  deleteNode(head, tail, 1);
  cout<<"After deletion:"<<endl;
  printLL(head);
  cout<<endl;

  cout<<"length:"<<findLength(head)<<endl;

}