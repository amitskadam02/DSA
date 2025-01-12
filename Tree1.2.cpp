#include<iostream>

using namespace std;

class Node{
    public:
    int value;
    Node* left;
    Node* right;
    
    Node(int _value){
        this->value = _value;
        this->left = NULL;
        this->right = NULL;
    }
};

// this node will written root of the tree
Node* createTree(){
    int value;
    cout<<"Enter the value:"<<endl;
    cin>>value;
    
    if(value == -1){
        return NULL;
    }
    
    // step1: create Node
    Node* root = new Node(value);
    // step2: craete left subtree
    root->left = createTree();
    // step3: create right subtree
    root->right =createTree();
    return root;
}

void preOrderTraversal(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    
    // N L R
    // N
    cout<<root->value<<" ";
    // L
    preOrderTraversal(root->left);
    // R
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    
    // L N R
    // L
    inOrderTraversal(root->left);
    // N
    cout<<root->value<<" ";
    // R
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    // base condition
    if(root == NULL){
        return;
    }
    
    // L R N
    // L
    postOrderTraversal(root->left);
    // R
    postOrderTraversal(root->right);
    // N
    cout<<root->value<<" ";
}

int main(){
    Node* root = createTree();
    
    cout<<"Printing PreOrder:";
    preOrderTraversal(root);
    cout<<endl;
    
    cout<<"Printing InOrder:";
    inOrderTraversal(root);
    cout<<endl;
    
    cout<<"Printing PostOrder:";
    postOrderTraversal(root);
    cout<<endl;
}