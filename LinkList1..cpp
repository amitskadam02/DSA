#include <iostream>
using namespace std;


class Node
{
  public:
  int data;
  Node* next;

  Node()
  {
    cout<<"Inside Default ctor"<<endl;
    this->next = NULL;
  }

  Node(int data)
  {
    cout<<"Inside parametrized ctor"<<endl;
    this->data = data;
    this->next = NULL;
  }
};

int main()
{
  // constructor initilzed. statically
  Node a;

  // constructor initilzed. dyanamically
  Node* b = new Node(10);


  return 0;
}