#include<iostream>
#include<queue>
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
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL); // separator for separate level
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            // purana level complete traverse
            cout << endl;
            if (!q.empty())
            {
                // queue have still child Node
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void inOrder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

bool findNodeInBST(Node* root,int target){
    if(root == NULL){
        return false;
    }
    if(root->data == target){
        return true;
    }
    if(target > root->data){

        return findNodeInBST(root->right,target);
    }else{
        return findNodeInBST(root->left,target);

    }
}
int main(){
  Node* root = NULL;
  cout<<"Enter data :"<<endl;
  //assuming only unique data is exist
  takeInput(root);
  cout<<"Print "<<endl;
  levelOrderTraversal(root);
  cout<<"Print inorder"<<endl;
 inOrder(root); //inorder is always sorted of BST
 cout<<endl<<findNodeInBST(root,100);
 cout<<endl<<findNodeInBST(root,101);
return 0;
 }