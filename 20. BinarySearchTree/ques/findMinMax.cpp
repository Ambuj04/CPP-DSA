#include<iostream>

using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* insertIntoBST(Node* root,int data){
    if(root==NULL){
        //first Node
        root = new Node(data);
        return root;
    }
    //other nodes
    if(root->data > data){
        //left insert
        root->left  = insertIntoBST(root->left,data);
    }else{
        //right insert
        root->right  = insertIntoBST(root->right,data);
    }

    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data != -1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
}

int minValue(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return -1;
    }
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp->data;
}
int maxValue(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return -1;
    }
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp->data;
}

int main(){
  Node* root = NULL;
  cout<<"Enter data :"<<endl;
  //assuming only unique data is exist
  takeInput(root);
cout<<minValue(root)<<endl;
cout<<maxValue(root);
return 0;
 }