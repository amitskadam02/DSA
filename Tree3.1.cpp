//
#include<iostream>
#include<queue>

using namespace std;
//#include<>

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

//
Node* createTree(){
    int value;
    cout<<"Enter the value for node:";
    cin>>value;
    
    if(value == -1){
        return NULL;
    }
    
    // create node
    Node* root = new Node(value); // root is newNode
     
    root->left = createTree();
    root->right = createTree();
    return root;
}

void preOrder(Node* root){
    if(root == NULL){ // why NULL
        return ;
    }
    
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root == NULL){ // why NULL
        return ;
    }
    
    // LNR
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL){ // why NULL
        return ;
    }
    
    // LRN
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

// Important : Level Order
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    cout<<endl; 
    
    while(!q.empty()){
        Node* temp = q.front(); // data
        q.pop();
        
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->left<<" ";
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right); 
            }
        }
    }
}

void printLeftView(Node* root, int level, vector<int>& leftView){
    // base condition
    if(root == NULL){
        return;
    }
    
    if(level == leftView.size()){
        leftView.push_back(root->data);
    }
    
    printLeftView(root->left, level+1, leftView);
    printLeftView(root->right, level+1, leftView);
}

int main(){
    // 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1 
    Node* root = createTree();
    levelOrderTraversal(root);
    
    vector<int>leftView;
    printLeftView(root, 0, leftView);
    
    for(int i= 0; i<leftView.size();i++){
        cout<<leftView[i]<<" ";
    }
    
}