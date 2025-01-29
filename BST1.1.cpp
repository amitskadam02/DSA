//
#include<iostream>
#include<queue>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int value){
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertIntoBST(Node* root, int data){
    if(root == NULL){
        Node* root = new Node(data);
        return root;
    }
    
    // it is not first Node
    if(data > root->data){
        root->right = insertIntoBST(root->right, data);
        
    }else{
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}

void createBST(Node* &root){
    int data;
    cout<<"enter data:"<<endl;
    cin>>data;
    
    while(data != -1){
        root = insertIntoBST(root, data);
        cout<<"enter data:"<<endl;
        cin>>data;
    }
}

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
            
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
            
        }
    }
}

void preOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    
    // NLR
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    
    // LNR
    
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    
    // LRN
    
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

void minValue(Node* root){
    if(root == NULL){
        return;
    }
    
    Node * temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    cout<<temp->data;
}

void maxValue(Node* root){
    if(root == NULL){
        return;
    }
    
    Node * temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    cout<<temp->data;
}

int main(){
    // 50 30 40 20 60 55 70 80 25 -1
    Node* root = NULL; // I dont know any value is there or not
    createBST(root);
    
    cout<<"level order tree:"<<endl;
    levelOrderTraversal(root);
    
    cout<<"pre order traversal:"<<endl;
    preOrderTraversal(root);
    cout<<endl;
    cout<<"in order traversal:"<<endl;
    inOrderTraversal(root);
    cout<<endl;
    cout<<"post order traversal:"<<endl;
    postOrderTraversal(root);
    cout<<endl;
    cout<<"Min Value is:"<<endl;
    minValue(root);
    cout<<endl;
    cout<<"Max Value is:"<<endl;
    maxValue(root);
    return 0;
}