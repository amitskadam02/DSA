#include <iostream>
using namespace std;


class Node
{
  public:
  int data;
  Node* next;

  Node()
  {
    // cout<<"Inside Default ctor"<<endl;
    this->next = NULL;
  }

  Node(int data)
  {
    // cout<<"Inside parametrized ctor"<<endl;
    this->data = data;
    this->next = NULL;
  }

};
 
// print LL 
void print(Node* head)
{
  Node* temp = head;

  while(temp != NULL)
  {
    cout<<temp->data<<"->";
    temp = temp->next; 
  }
  cout<<endl;
}

// length of LL
int lengthLL(Node* head)
{
  Node* temp = head;
  int count = 0 ;

  while(temp != NULL)
  {
    count ++;
    temp = temp->next;
  }

  return count;
}

// Insert at Head/Beginning
// Head should be pass by reference.
void insertATHead(Node* &head, Node* &tail, int data)
{
  if(head == NULL)
  {
    // Empty LL
    // step: crreate newNode
    Node* newNode = new Node(data);
    // step2: update head
    head = newNode;
    tail = newNode;
  }
  else
  {
    // Not Empty LL
    // create new node
    Node* newNode = new Node(data) ;
    // attach head node to new node 
    newNode->next = head;
    // update head
    head = newNode;
  }

}

// Insert at Tail/End
// Head, Tail should be pass by reference.
void insertATTail(Node* &head, Node* &tail, int data)
{
  if(head == NULL)
  {
    // Empty LL
    // step1: create new node
    Node *newNode = new Node (data);
    // step2:
    tail = newNode;
    head = newNode;

  }
  else
  {
    // Non Empty LL
    // stp1: create new node
    Node* newNode = new Node(data);
    // step2:link new node to tail
    tail->next = newNode;
    // step3: update tail
    tail = newNode;
  }
}

void createTail(Node* head, Node* &tail)
{
    Node *temp = head;
    
    while(temp->next != NULL)
    {
      temp = temp->next;
    }
    
    tail = temp;
}

// Insert at Position
// Head, Tail should be pass by reference.
void insertATPosition(Node* &head, Node* &tail, int data, int position)
{
    // assumption position values 1 to length+1
    int length = lengthLL(head);
  if(position == 1)
  {
    insertATHead(head, tail, data);
  }
  else if(position == length+1)
  {
    insertATTail(head, tail, data);
  }
  else
  {
      // Insert at middle 
    // step1: craete node
    Node* newNode = new Node(data);
    // step2: traverse curr and prev node
    Node* prev = NULL;
    Node* curr = head;

    if(position != 1)
    {
        position--;
      prev = curr;
      curr = curr->next;
      
    }
    // step3: attach prev to new node 
    prev->next = newNode;
    // step4: attach newnode to curr
    newNode->next = curr;

  }

}


int main()
{

  Node* head = NULL;
  Node* tail = NULL;

  insertATTail(head, tail, 10);
  insertATTail(head, tail, 20);
  insertATTail(head, tail, 30);
  insertATTail(head, tail, 50);
  cout<<"Before:"<<endl;
  print(head);
  
  insertATPosition(head, tail, 500, 2);
  cout<<"After:"<<endl;
  print(head);



  // // constructor initilzed. statically
  // // Node *a = new Node();

  // // constructor initilzed. dyanamically
  // Node* first = new Node(10);
  // Node* second = new Node(20);
  // Node* third = new Node(30);
  // Node* fourth = new Node(40);
  // Node* fifth = new Node(50);

  // first->next = second;
  // second->next = third;
  // third->next = fourth;
  // fourth->next = fifth;

  // Node* head = first;
  // Node* tail = fifth;
  // // Node *temp = head;

  // print(head);
  // cout<<"Length of LL is: "<<lengthLL(head)<<endl;

  // inserATHead(head, 500);
  // print(head);

  // inserATTail(head, tail, 1000);
  // print(head);

  return 0;
}